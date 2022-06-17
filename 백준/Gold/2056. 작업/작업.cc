#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N;
int Memory[10001];
int inDegree[10001];
int T[10001];
int work;
int result;
vector<int> v[10001];

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
			Memory[next] = max(Memory[next], Memory[x] + T[next]);
			inDegree[next]--;
			if (inDegree[next] == 0)
				q.push(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> inDegree[i];
		Memory[i] = T[i];
		if (inDegree[i] != 0) {
			for (int j = 0; j < inDegree[i]; j++) {
				cin >> work;
				v[work].push_back(i);
			}
		}
	}

	topologySort();

	for (int i = 1; i <= N; i++) {
		result = max(result, Memory[i]);
	}
	cout << result << "\n";
}