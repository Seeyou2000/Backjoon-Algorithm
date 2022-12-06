#include <iostream>
using namespace std;

int arr[100001];
int cnt = 1;

int main() {
    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            return 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Case " << cnt << ": Sorting... done!\n";
        cnt++;
    }
}