#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int T;
int K, M, P;
int inDegree[1001];
int Strahler[1001];
vector<int> v[1001];

void topologySort() {
	queue<int> q;
	for (int i = 1; i <= M; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
			Strahler[i] = 1;
		}
	}

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int next = v[x][i];
			inDegree[next]--;
			if (Strahler[x] > Strahler[next]) Strahler[next] = Strahler[x];
			else if(!inDegree[next]) Strahler[next]++;
			if (inDegree[next] == 0) {
				q.push(next);
			}
		}
	}
}

void reset() {
	for (int i = 1; i <= M; i++) {
		inDegree[i] = 0;
		Strahler[i] = 0;
		v[i].clear();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> K >> M >> P;
		for (int j = 0; j < P; j++) {
			int a, b;
			cin >> a >> b;
			v[a].push_back(b);
			inDegree[b]++;
		}

		topologySort();

		for (int i = 1; i <= M; i++) {
			if (Strahler[i] >= max)
				max = Strahler[i];
		}

		cout << K << " " << max << "\n";
		max = 0;
		reset();
	}
	return 0;
}