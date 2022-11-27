#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> graph[100001];
int order[100001];
bool visited[100001];
queue<int> q;
int cnt = 1;

void bfs(int v)
{
	q.push(v);
	while (!q.empty())
	{
		int cur_node = q.front();
		q.pop();
		if (visited[cur_node]) continue;
		if (!visited[cur_node])
		{
			order[cur_node] = cnt;
			cnt++;
		}
		visited[cur_node] = true;

		for (int i = 0; i < graph[cur_node].size(); i++)
		{
			int x = graph[cur_node][i];
			if (!visited[x])
			{
				q.push(x);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, R;
	cin >> N >> M >> R;
	for (int i = 0; i < M; i++)
	{
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());
	bfs(R);
	for (int i = 1; i <= N; i++)
		cout << order[i] << "\n";

	return 0;
}