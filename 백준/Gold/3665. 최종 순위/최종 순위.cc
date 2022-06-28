#include <iostream>
#include <queue>
using namespace std;

int inDegree[501];
int score[501];
int result[501];
bool v[501][501];
bool b;
int T, N, M;

void TopologySort() {
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (!inDegree[i]) {
			q.push(i);
		}
	}
	for (int i = 1; i <= N; i++) {
		if (q.empty()) {
			cout << "IMPOSSIBLE" << "\n";
			b = true;
			return;
		}
		if (q.size() > 1) {
			cout << "?" << "\n";
			b = true;
			return;
		}
		int x = q.front();
		result[i] = x;
		q.pop();
		inDegree[x]--;
		for (int j = 1; j <= N; j++) {
			if (v[x][j]) inDegree[j]--;
			if (!inDegree[j]) q.push(j);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		b = false;
		cin >> N;
		for (int i = 1; i <= N; i++) {
			cin >> score[i];
			result[i] = 0;
			inDegree[i] = 0;
			for (int j = 1; j <= N; j++) {
				v[i][j] = false;
			}
		}
		for (int i = 1; i <= N; i++) {
			int x = score[i];
			for (int j = i + 1; j <= N; j++) {
				v[x][score[j]] = true;
				inDegree[score[j]]++;
			}
		}
		cin >> M;
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			if (v[a][b]) {
				v[a][b] = false;
				v[b][a] = true;
				inDegree[a]++;
				inDegree[b]--;
			}
			else {
				v[a][b] = true;
				v[b][a] = false;
				inDegree[a]--;
				inDegree[b]++;
			}
		}
		TopologySort();
		if (b) {
			continue;
		}
		else {
			for (int i = 1; i <= N; i++) {
				cout << result[i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}