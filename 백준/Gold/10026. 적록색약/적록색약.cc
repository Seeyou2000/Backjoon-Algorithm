#include <iostream>
using namespace std;

char map[101][101];
int visited[101][101];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};
int cnt;
int N;

void Rdfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if (map[ny][nx] == 'R' && !visited[ny][nx]) {
			visited[ny][nx]++;
			Rdfs(ny, nx);
		}
	}
}

void Rdfs_find() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'R' && !visited[i][j]) {
				cnt++;
				visited[i][j]++;
				Rdfs(i, j);
			}
		}
	}
}

void Gdfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if (map[ny][nx] == 'G' && !visited[ny][nx]) {
			visited[ny][nx]++;
			Gdfs(ny, nx);
		}
	}
}

void Gdfs_find() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'G' && !visited[i][j]) {
				cnt++;
				visited[i][j]++;
				Gdfs(i, j);
			}
		}
	}
}

void Bdfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if (map[ny][nx] == 'B' && !visited[ny][nx]) {
			visited[ny][nx]++;
			Bdfs(ny, nx);
		}
	}
}

void Bdfs_find() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == 'B' && !visited[i][j]) {
				cnt++;
				visited[i][j]++;
				Bdfs(i, j);
			}
		}
	}
}

void RGdfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if ((map[ny][nx] == 'R' || map[ny][nx] == 'G') && !visited[ny][nx]) {
			visited[ny][nx]++;
			RGdfs(ny, nx);
		}
	}
}

void RGdfs_find() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((map[i][j] == 'R' || map[i][j] == 'G') && !visited[i][j]) {
				cnt++;
				visited[i][j]++;
				RGdfs(i, j);
			}
		}
	}
}

void reset() {
	cnt = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			visited[i][j] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	Rdfs_find();
	Gdfs_find();
	Bdfs_find();
	cout << cnt << " ";
	reset();
	RGdfs_find();
	Bdfs_find();
	cout << cnt << "\n";

	return 0;
}