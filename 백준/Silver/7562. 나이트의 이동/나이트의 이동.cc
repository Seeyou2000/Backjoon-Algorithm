#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

int map[301][301];
bool visited[301][301];
int dx[8] = { -2,-1,1,2,2,1,-1,-2 };
int dy[8] = { 1,2,2,1,-1,-2,-2,-1 };
queue<pair<int, pair<int, int>>> q;
int cnt, I;

void bfs(int y, int x, int ey, int ex)
{
	q.push({ 0, { y,x } });
	visited[y][x] = true;
	while (!q.empty())
	{
		int cnt = q.front().first;
		int cur_y = q.front().second.first;
		int cur_x = q.front().second.second;
		q.pop();
		if (cur_y == ey && cur_x == ex)
		{
			cout << cnt << "\n";
			break;
		}
		for (int i = 0; i < 8; i++)
		{
			int ny = cur_y + dy[i];
			int nx = cur_x + dx[i];

			if (ny < 0 || ny >= I || nx < 0 || nx >= I)
				continue;
			if (!visited[ny][nx])
			{
				q.push({ cnt + 1,{ ny,nx } });
				visited[ny][nx] = true;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int start_x, start_y, end_x, end_y;
		cin >> I >> start_y >> start_x >> end_y >> end_x;
		bfs(start_y, start_x, end_y, end_x);
		memset(map, 0, sizeof(map));
		memset(visited, false, sizeof(visited));
		q = queue<pair<int, pair<int, int>>>();
	}
	return 0;
}