#include <iostream>
using namespace std;

char map[21][21];
bool visited[26];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,1,-1 };
int ans = 0;

bool possible(int y, int x, int R, int C)
{
	if (y < 1 || y > R || x < 1 || x > C)
		return false;
	if (visited[map[y][x] - 65])
		return false;
	return true;
}

void dfs(int y, int x, int R, int C, int cnt)
{
	int end = 0;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (possible(ny, nx, R, C))
		{
			visited[map[ny][nx] - 65] = true;
			dfs(ny, nx, R, C, cnt + 1);
			visited[map[ny][nx] - 65] = false;
		}
		else
		{
			end += 1;
		}
		if (end == 4)
		{
			if (ans < cnt) ans = cnt;
		}
	}
	cnt--;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int R, C;
	cin >> R >> C;
	for (int i = 1; i <= R; i++)
	{
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			map[i][j + 1] = str[j];
		}
	}
	visited[map[1][1] - 65] = true;
	dfs(1, 1, R, C, 1);
	cout << ans;
	return 0;
}