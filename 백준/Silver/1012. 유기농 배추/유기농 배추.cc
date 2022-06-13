#include <iostream>
#include <string.h>
using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int M, N, K;
int map[50][50];
int visited[50][50];

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
			continue;
		if (map[ny][nx] && !visited[ny][nx]) {
			visited[ny][nx]++;
			dfs(nx, ny);
		}
	}
}

int main() {
	int T, x, y;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> M >> N >> K;

		memset(map, 0, sizeof(map));
		memset(visited, 0, sizeof(visited));

		int worm = 0;

		for (int i = 0; i < K; i++) {
			cin >> x >> y;
			map[y][x] = 1;
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (map[i][j] && !visited[i][j]) {
					worm++;
					visited[i][j]++;
					dfs(j, i);
				}
			}
		}
		cout << worm << "\n";
	}
}