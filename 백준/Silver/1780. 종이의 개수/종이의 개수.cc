#include <iostream>
#define MAX 2188
using namespace std;

int N;
int arr[MAX][MAX];

int white, blue, red;

void quadTree(int M, int x, int y)
{
    bool all0 = true, all1 = true, all_1 = true;

    for (int i = x; i < x + M; i++)
    {
        for (int j = y; j < y + M; j++)
        {
            if (arr[i][j] == 1)
            {
                all0 = false;
                all_1 = false;
            }
            if (arr[i][j] == 0)
            {
                all1 = false;
                all_1 = false;
            }
            if (arr[i][j] == -1)
            {
                all0 = false;
                all1 = false;
            }
        }
    }

    if (all0)
    {
        white++;
        return;
    }
    if (all1)
    {
        blue++;
        return;
    }
    if (all_1)
    {
        red++;
        return;
    }
    quadTree(M / 3, x, y);
    quadTree(M / 3, x + M / 3, y);
    quadTree(M / 3, x + 2 * M / 3, y);
    quadTree(M / 3, x, y + M / 3);
    quadTree(M / 3, x, y + 2 * M / 3);
    quadTree(M / 3, x + M / 3, y + M / 3);
    quadTree(M / 3, x + 2 * M / 3, y + M / 3);
    quadTree(M / 3, x + M / 3, y + 2 * M / 3);
    quadTree(M / 3, x + 2 * M / 3, y + 2 * M / 3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    quadTree(N, 0, 0);
    cout << red << "\n" << white << "\n" << blue;
}