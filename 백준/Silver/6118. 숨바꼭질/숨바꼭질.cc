#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
vector<int> map[20001];
int visited[20001];
int dis[20001];
queue<int> q;

void bfs(int a) {
	q.push(a);
	visited[a] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (int i = 0; i < map[x].size(); i++) {
			int b = map[x][i];
			if (!visited[b]) {
				if (dis[x] == dis[b])dis[b]++;
				if (dis[x] > dis[b]) {
					dis[b] = dis[x];
					dis[b]++;
				}
				visited[b] = 1;
				q.push(b);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = 0;
	int index = 0;
	int cnt = 0;

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	bfs(1);
	for (int i = N; i >= 1; i--) {
		if (dis[i] >= max) {
			max = dis[i];
			index = i;
		}
	}
	for (int i = 1; i <= N; i++) {
		if (max == dis[i])
			cnt++;
	}
	cout << index << " " << max << " " << cnt << "\n";
	return 0;
}