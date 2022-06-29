#include <iostream>
using namespace std;

int N, M;
int map[101][101];
int visited[101];
bool isCycle;

void dfs(int x) {
	visited[x] = 1;
	for (int i = 1; i < N; i++) {
		if (map[x][i] == 1) {
			if (visited[i] == 1) {
				isCycle = true;
				return;
			}
			else if (visited[i] == 0) {
				dfs(i);
			}
		}
	}
	visited[x] = -1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i < N; i++) {
		cin >> M;
		for (int j = 0; j < M; j++) {
			int a;
			cin >> a;
			map[i][a] = 1;
		}
	}
	dfs(1);
	if (isCycle) cout << "CYCLE";
	else cout << "NO CYCLE";
	return 0;
}