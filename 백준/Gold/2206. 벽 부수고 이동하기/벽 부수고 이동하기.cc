#include <iostream>
#include <queue>
using namespace std;

int map[1001][1001];
int visited[1001][1001][2];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int N, M;
int result;
queue<pair<pair<int, int>,int>> q;

int bfs() {
	while (!q.empty()) {
		int y = q.front().first.first;
		int x = q.front().first.second;
		int wall = q.front().second;
		q.pop();

		if (x == M && y == N)
		{
			return visited[y][x][wall];
		}

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny <= 0 || nx <= 0 || ny > N || nx > M)
				continue;
			if (map[ny][nx] == 1 && wall) {
				visited[ny][nx][wall - 1] = visited[y][x][wall] + 1;
				q.push({ {ny,nx} ,wall - 1 });
			}
			if (map[ny][nx] == 0 && visited[ny][nx][wall] == 0) {
				visited[ny][nx][wall] = visited[y][x][wall] + 1;
				q.push({ {ny,nx},wall });
			}
		}
	}
	return -1;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	string str;
	for (int i = 1; i <= N; i++) {
		cin >> str;
		for (int j = 0; j <= str.length(); j++) {
			if (str[j] == '1') map[i][j+1] = 1;
			else map[i][j+1] = 0;
		}
	}
	q.push({ {1,1} , 1});
	visited[1][1][1] = 1;
	cout << bfs();
	return 0;
}