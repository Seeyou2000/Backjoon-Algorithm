#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int M, N, Time;
int map[1001][1001];
queue<pair<int, int>>q;

void bfs() {
	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= N || nx >= M)
				continue;
			if (map[ny][nx] == 0) {
				q.push(make_pair(ny, nx));
				map[ny][nx] = map[y][x] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) {
				q.push(make_pair(i, j));
			}
		}
	}

	bfs();

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 0) {
				cout << -1;
				return 0;
			}
			if (Time < map[i][j]) {
				Time = map[i][j];
			}
		}
	}
	cout << Time - 1;
	return 0;
}