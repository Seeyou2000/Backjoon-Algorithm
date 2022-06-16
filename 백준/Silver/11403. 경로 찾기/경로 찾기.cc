#include <iostream>
using namespace std;

int map[101][101];
int visited[101];
int N;

void dfs(int start) {
	for (int i = 0; i < N; i++) {
		if (map[start][i] && !visited[i]) {
			visited[i] = 1;
			dfs(i);
		}
	}
}

void reset() {
	for (int i = 0; i < N; i++) {
		visited[i] = 0;
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
	for (int i = 0; i < N; i++) {
		dfs(i);
		for (int j = 0; j < N; j++) {
			if (visited[j]) map[i][j] = 1;
		}
		reset();
		
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << map[i][j]  << " ";
		}
		cout << "\n";
	}
	return 0;
}