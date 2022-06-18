#include <iostream>
#include <queue>

using namespace std;

int N, M;
int map1[31][31];
int map2[31][31];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int visited[31][31];
bool Ispossible = true;

void bfs(int a, int b, int m1, int m2) {
	visited[a][b] = 1;
	queue <pair<int, int>> q;
	q.push(make_pair(a, b));
	while (!q.empty()) {
		int x = q.front().second;
		int y = q.front().first;
		q.pop();
		map1[y][x] = m2;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= M || ny < 0 || ny >= N)
				continue;
			if (!visited[ny][nx] && (map1[ny][nx] == m1))
			{
				visited[ny][nx] = 1;
				q.push(make_pair(ny, nx));
			}
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map1[i][j] != map2[i][j]) {
				Ispossible = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map1[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map2[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (map1[i][j] != map2[i][j]) {
				bfs(i, j, map1[i][j], map2[i][j]);
			}
		}
	}
	if (Ispossible)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}