#include <iostream>
#include <deque>
using namespace std;

int N, K;
int visited[100001];
int dis[100001];

void bfs(int n, int k) {
	deque<int> dq;
	dq.push_front(n);
	visited[n] = 1;
	while (!dq.empty()) {
		int x = dq.front();
		dq.pop_front();

		if (x * 2 <= 100000 && !visited[x * 2]) {
			visited[x * 2] = 1;
			dq.push_front(x * 2);
			dis[x * 2] = dis[x];
		}
		if (x - 1 >= 0 && !visited[x - 1]) {
			visited[x - 1] = 1;
			dq.push_back(x - 1);
			dis[x - 1] = dis[x] + 1;
		}
		if (x + 1 <= 100000 && !visited[x + 1]) {
			visited[x + 1] = 1;
			dq.push_back(x + 1);
			dis[x + 1] = dis[x] + 1;
		}
	}
	cout << dis[k];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	bfs(N, K);
	return 0;
}