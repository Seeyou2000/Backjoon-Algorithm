#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[100001];
bool visited[100001];
int ordered[100001];
queue<int> q;
int cnt = 1;

void bfs(int v)
{
	q.push(v);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		if (visited[x]) continue;
		else {
			ordered[x] = cnt;
			cnt++;
		}
		visited[x] = true;
		for (int i = 0; i < graph[x].size(); i++)
		{
			int next = graph[x][i];
			if (!visited[next])
			{
				q.push(next);
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
	{
		sort(graph[i].begin(), graph[i].end(), greater<int>());
	}
	bfs(R);
	for (int i = 1; i <= N; i++)
	{
		cout << ordered[i] << "\n";
	}
	return 0;
}