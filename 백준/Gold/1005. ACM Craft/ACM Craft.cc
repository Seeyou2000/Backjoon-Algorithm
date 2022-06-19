#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int T, N, K;
int inDegree[1001];
int D[1001];
int dp[1001];
int X, Y, W;
vector<int> v[1001];

void topologySort() {
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
		}
	}

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int next = v[x][i];
			dp[next] = max(dp[next], dp[x] + D[next]);
			inDegree[next]--;
			if (inDegree[next] == 0) {
				q.push(next);
			}
		}
	}
}

void reset() {
	for (int i = 1; i <= N; i++) {
		inDegree[i] = 0;
		D[i] = 0;
		dp[i] = 0;
		v[i].clear();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> K;
		for (int j = 1; j <= N; j++) {
			cin >> D[j];
			dp[j] = D[j];
		}
		for (int j = 0; j < K; j++) {
			cin >> X >> Y;
			inDegree[Y]++;
			v[X].push_back(Y);
		}
		cin >> W;

		topologySort();

		cout << dp[W] << "\n";
		reset();
	}
	return 0;
}