#include <iostream>
#include <cstring>
using namespace std;

int dx[8] = { 0,1,1,1,0,-1,-1,-1 };
int dy[8] = { -1,-1,0,1,1,1,0,-1 };
int Map[51][51];
bool visited[51][51];

void dfs(int x, int y, int w, int h)
{
	for (int i = 0; i < 8; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 1 || ny > h || nx < 1 || nx > w)
			continue;
		if (Map[ny][nx] && !visited[ny][nx])
		{
			visited[ny][nx] = true;
			dfs(nx, ny, w, h);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true)
	{
		int ans = 0;
		int w, h;
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		memset(Map, 0, sizeof(Map));
		memset(visited, false, sizeof(visited));

		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				cin >> Map[i][j];
			}
		}
		for (int i = 1; i <= h; i++)
		{
			for (int j = 1; j <= w; j++)
			{
				if (Map[i][j] && !visited[i][j])
				{
					visited[i][j] = true;
					ans++;
					dfs(j, i, w, h);
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}