#include <iostream>
#include <queue>
using namespace std;

int map[101][101];
int visited[101][101];
int min_map[101][101];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int N, M;
int result;
queue<pair<int, int>> q;

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
			if (map[ny][nx] == 1 && visited[ny][nx] == 0) {
				visited[ny][nx] = 1;
				q.push(make_pair(ny, nx));
				min_map[ny][nx] = min_map[y][x] + 1;
			}
		}
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '1') map[i][j] = 1;
			else map[i][j] = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			min_map[i][j] = map[i][j];
		}
	}
	q.push(make_pair(0, 0));
	bfs();
	cout << min_map[N - 1][M - 1];
	return 0;
}