#include <iostream>
#include <queue>
using namespace std;

int N, K;
int visited[100001];
int Time[100001];
int dn[3];

void bfs() {
	queue<int> q;
	q.push(N);
	visited[N] = 1;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		dn[0] = x - 1;
		dn[1] = x + 1;
		dn[2] = x * 2;
		for (int i = 0; i < 3; i++) {
			if (dn[i] < 0 || dn[i] > 100000 || dn[i] > K + 1) {
				continue;
			}
			if (!visited[dn[i]]) {
				visited[dn[i]] = 1;
				Time[dn[i]] = Time[x] + 1;
				q.push(dn[i]);
			}
			else if (Time[dn[i]] >= Time[x] + 1) {
				visited[dn[i]]++;
				q.push(dn[i]);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	if (N > K) {
		cout << N - K << "\n" << 1;
	}
	else {
		bfs();
		cout << Time[K] << "\n" << visited[K];
	}
	return 0;
}