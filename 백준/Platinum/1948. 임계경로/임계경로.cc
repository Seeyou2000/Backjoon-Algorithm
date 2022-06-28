#include <iostream>
#include <queue>
#include <vector>
using namespace std;

vector<int> v[10001];
vector<int> w[10001];
vector<int> t[10001];
vector<int> t2[10001];
int inDegree[10001];
int result[10001];
bool visited[10001];
int Count;
int N, M;
int start, finish;
queue<int> q;

void TopologySort() {
	q.push(start);
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int next = v[x][i];
			int edge_time = t[x][i];
			if (result[next] <= edge_time + result[x]) {
				result[next] = edge_time + result[x];
			}
			inDegree[next]--;
			if (!inDegree[next]) {
				q.push(next);
			}
		}
	}
	
	q.push(finish);
	while (!q.empty()) {
		int y = q.front();
		q.pop();
		for (int i = 0; i < w[y].size(); i++) {
			int next = w[y][i];
			int edge_time = t2[y][i];
			if (result[y] - result[next] == edge_time) {
				Count++;
				if (!visited[next]) {
					q.push(next);
					visited[next] = true;
				}
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b, time;
		cin >> a >> b >> time;
		v[a].push_back(b);
		t[a].push_back(time);
		w[b].push_back(a);
		t2[b].push_back(time);
		inDegree[b]++;
	}
	cin >> start >> finish;
	TopologySort();
	cout << result[finish] << " " << Count;
}