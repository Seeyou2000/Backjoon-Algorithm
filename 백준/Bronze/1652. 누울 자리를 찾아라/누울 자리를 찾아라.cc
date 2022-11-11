#include <iostream>
#include <vector>
using namespace std;

char map[101][101];

int main()
{
	int N;
	int cnt = 0;
	int row = 0;
	int column = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j];
		}
		getchar();
	}
	for (int i = 1; i <= N; i++)
	{
		cnt = 0;
		for (int j = 1; j <= N; j++)
		{
			if (map[i][j] == '.')
			{
				cnt++;
			}
			else if (map[i][j] == 'X')
			{
				cnt = 0;
			}
			if (cnt == 2)
			{
				row++;
			}
		}
	}
	cnt = 0;
	for (int i = 1; i <= N; i++)
	{
		cnt = 0;
		for (int j = 1; j <= N; j++)
		{
			if (map[j][i] == '.')
			{
				cnt++;
			}
			else if (map[j][i] == 'X')
			{
				cnt = 0;
			}
			if (cnt == 2)
			{
				column++;
			}
		}
	}
	cout << row << " " << column;
	return 0;
}