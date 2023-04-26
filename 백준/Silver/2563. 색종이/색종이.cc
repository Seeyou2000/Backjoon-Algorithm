#include <iostream>
using namespace std;

bool map[101][101];

int main()
{
	int ans = 0;
	int N;
	cin >> N;
	while (N--)
	{
		int x, y;
		cin >> x >> y;
		for (int i = y; i < y + 10; i++)
		{
			for (int j = x; j < x + 10; j++)
			{
				map[i][j] = true;
			}
		}
	}

	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j <= 100; j++)
		{
			if (map[i][j])
				ans++;
		}
	}
	cout << ans;
	return 0;
}