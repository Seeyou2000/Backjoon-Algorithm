#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[6] = { 1,-1,0,0,0,0 };
int dy[6] = { 0,0,1,-1,0,0 };
int dz[6] = { 0,0,0,0,1,-1 };
int M, N, H, Time;
int map[101][101][101];
typedef struct Tomato {
	int z;
	int y;
	int x;
}Tomato;

queue<Tomato>q;

void bfs() {
	while (!q.empty()) {
		int z = q.front().z;
		int y = q.front().y;
		int x = q.front().x;
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nz = z + dz[i];
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || nz < 0 || nz >= H || ny >= N || nx >= M)
				continue;
			if (map[nz][ny][nx] == 0) {
				q.push({ nz,ny,nx });
				map[nz][ny][nx] = map[z][y][x] + 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> M >> N >> H;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> map[i][j][k];
				if (map[i][j][k] == 1) {
					q.push({ i,j,k });
				}
			}
		}
	}

	bfs();

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (map[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				if (Time < map[i][j][k]) {
					Time = map[i][j][k];
				}
			}
		}
	}
	cout << Time - 1;
	return 0;
}
