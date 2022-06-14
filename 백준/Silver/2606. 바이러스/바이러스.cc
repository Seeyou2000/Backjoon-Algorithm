#include <iostream>
using namespace std;

int map[101][101];
int visited[101];
int V, E;
int cnt;

void dfs(int v) {
	visited[v] = 1;
	for (int i = 1; i <= V; i++) {
		if (map[v][i] == 1 && visited[i] == 0) {
			dfs(i);
		}
	}
}

int main() {
	int a, b;
	cin >> V >> E;
	for (int i = 0; i < E; i++) {
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	dfs(1);
	for (int i = 0; i < 101; i++) {
		if (visited[i] == 1) {
			cnt++;
		}
	}
	cout << cnt - 1;
}