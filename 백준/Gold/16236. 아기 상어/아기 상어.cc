#include <iostream>
#include <algorithm>
#include <queue>
#define max_value 401
#define max_index 21
using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int map[21][21];
int N, s_x, s_y;
int mx, my, md;
int babyShark = 2;
int Shark_eat = 0;
int visited[21][21];
int result = 0;
vector<pair<int, int>>v;

void reset() {
	md = max_value;
	mx = max_index;
	my = max_index;
	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			visited[i][j] = -1;
}

void bfs(int a, int b) {
	queue<pair<int, int>>q;
	q.push(make_pair(a, b));
	visited[a][b] = 0;

	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (nx <= 0 || nx > N || ny <= 0 || nx > N)
				continue;
			if (visited[nx][ny] != -1)
				continue;
			if (map[nx][ny] > babyShark)
				continue;
			visited[nx][ny] = visited[x][y] + 1;
			if (map[nx][ny] != 0 && map[nx][ny] < babyShark) {
				if (md > visited[nx][ny]) {
					mx = nx;
					my = ny;
					md = visited[nx][ny];
				}
				else if (md == visited[nx][ny]) {
					if (mx == nx) {
						if (my > ny) {
							mx = nx;
							my = ny;
						}
					}
					else if (mx > nx) {
						mx = nx;
						my = ny;
					}
				}
			}
			q.push(make_pair(nx, ny));
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 9) {
				s_x = i;
				s_y = j;
				map[i][j] = 0;
			}
		}
	}
	while (true) {
		reset();
		bfs(s_x, s_y);
		if (mx != max_index && my != max_index) {
			result += visited[mx][my];
			Shark_eat++;
			if (Shark_eat == babyShark) {
				babyShark++;
				Shark_eat = 0;
			}
			map[mx][my] = 0;
			s_x = mx;
			s_y = my;
		}
		else {
			break;
		}
	}
	cout << result;
	return 0;
}