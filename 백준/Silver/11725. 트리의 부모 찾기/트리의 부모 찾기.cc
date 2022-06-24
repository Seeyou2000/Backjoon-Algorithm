#include <iostream>
#include <vector>
using namespace std;

int N;
bool visited[100001];
vector<int> graph[100001];
int parent_node[100001];

void dfs(int x) {
	visited[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int next = graph[x][i];
		if (!visited[next]) {
			parent_node[next] = x;
			dfs(next);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	dfs(1);

	for (int i = 2; i <= N; i++) {
		cout << parent_node[i] << "\n";
	}
}
