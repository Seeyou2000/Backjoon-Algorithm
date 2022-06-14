#include <iostream>
using namespace std;

int map[1001][1001];
int visited[1001];
int N, M;
int cnt;

void dfs(int v) {
	visited[v] = 1;
	for (int i = 1; i <= N; i++) {
		if (map[v][i] == 1 && visited[i] == 0) {
			dfs(i);
		}
	}
}

int main() {
	int u, v;
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		cin >> u >> v;
		map[u][v] = 1;
		map[v][u] = 1;
	}
	for (int i = 1; i <= N; i++) {
		if (!visited[i]) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt;
}