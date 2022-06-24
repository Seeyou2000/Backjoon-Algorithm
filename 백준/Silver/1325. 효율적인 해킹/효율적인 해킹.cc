#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
bool visited[10001];
vector<int> graph[10001];
int arr[10001];
int cnt;

void dfs(int x) {
	visited[x] = true;
	for (int i = 0; i < graph[x].size(); i++) {
		int next = graph[x][i];
		if (!visited[next]) {
			cnt++;
			dfs(next);
		}
	}
}

void reset() {
	for (int i = 1; i <= N; i++) {
		visited[i] = false;
	}
	cnt = 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[b].push_back(a);
	}
	for (int i = 1; i <= N; i++) {
		dfs(i);
		arr[i] = cnt;
		reset();
	}
	int max = arr[0];
	for (int i = 1; i <= N; i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}
	}
	for (int i = 1; i <= N; i++) {
		if (max == arr[i]) {
			cout << i << " ";
		}
	}
	return 0;
}