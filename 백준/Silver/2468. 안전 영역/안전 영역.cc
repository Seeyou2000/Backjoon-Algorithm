#include <iostream>
#include <cstring>
using namespace std;

int map[101][101];
bool visited[101][101];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt = 0;

void dfs(int y, int x, int N)
{
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 1 || ny > N || nx < 1 || nx > N)
			continue;
		if (map[ny][nx] > 0 && !visited[ny][nx])
		{
			visited[ny][nx] = true;
			dfs(ny, nx, N);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int water_height = 1;
	int ans = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> map[i][j];
		}
	}
	while (true)
	{
		cnt = 0;
		memset(visited, false, sizeof(visited));
		bool flood = true;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				map[i][j] -= water_height;
				if (map[i][j] > 0)
					flood = false;
			}
		}
		if (flood) break;
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (map[i][j] > 0 && !visited[i][j])
				{
					cnt++;
					visited[i][j] = true;
					dfs(i, j, N);
				}
			}
		}
		ans = max(ans, cnt);
	}
	if (!ans)
		ans = 1;
	cout << ans;
	return 0;
}