#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
int map[1001][1001];
int visited[1001];
queue<int> q;

void reset() {
	for (int i = 0; i <= N; i++) {
		visited[i] = 0;
	}
}

void dfs(int v) {
	visited[v] = 1;
	cout << v << " ";
	for (int i = 1; i <= N; i++) {
		if (map[v][i] == 1 && visited[i] == 0) {
			dfs(i);
		}
	}
}

void bfs(int v) {
	q.push(v);
	visited[v] = 1;
	cout << v << " ";

	while (!q.empty()) {
		v = q.front();
		q.pop();
		for (int i = 0; i <= N; i++) {
			if (map[v][i] == 1 && visited[i] == 0) {
				q.push(i);
				visited[i] = 1;
				cout << i << " ";
			}
		}
	}
}

int main() {
	cin >> N >> M >> V;
	
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	dfs(V);
	cout << "\n";
	reset();
	bfs(V);
	return 0;
}