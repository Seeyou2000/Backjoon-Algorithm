#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;


int board[1002][1002];
int dist[1002][1002];
int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

queue<pair<int, int>> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
    
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			dist[i][j] = -1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 2) {
				q.push({ i,j });
				dist[i][j] = 0;
			}
		}
	}
	
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m || dist[nx][ny] != -1 || board[nx][ny] == 0) continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({ nx,ny });
		}
	}

	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 0) cout << 0 << " ";
			else cout << dist[i][j] << " ";
		}
		cout << "\n";
	}
}