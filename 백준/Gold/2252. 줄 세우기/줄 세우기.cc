#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, M;
int inDegree[32001];
bool visited[32001];
vector<int> v[32001];
queue<int> q;

void dfs(int x) {
	visited[x] = true;
	cout << x << " ";
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		inDegree[next]--;
		if (next && !visited[next] && !inDegree[next]) {
			dfs(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		v[a].push_back(b);
		inDegree[b]++;
	}
	for (int i = 1; i <= N; i++) {
		if (!inDegree[i] && !visited[i]) {
			dfs(i);
		}
	}

	return 0;
}