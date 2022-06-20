#include <iostream>
#include <queue>
using namespace std;

int N, K;
int visited[100001];

int bfs(int v, int m) {
	int cnt = 0;
	queue<int> q;
	q.push(v);
	visited[v] = 1;
	while (!q.empty()) {
		int size = q.size();
		for (int i = 0; i < size; i++) {
			int x = q.front();
			q.pop();
			if (x == m) {
				return cnt;
			}
			if (x >= 0 && !visited[x - 1]) {
				q.push(x - 1);
				visited[x - 1] = 1;
			}
			if (x <= 100000 && !visited[x + 1]) {
				q.push(x + 1);
				visited[x + 1] = 1;
			}
			if (x * 2 <= 100000 && !visited[x * 2]) {
				q.push(x * 2);
				visited[x * 2] = 1;
			}
		}
		cnt++;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	cout << bfs(N, K);
}