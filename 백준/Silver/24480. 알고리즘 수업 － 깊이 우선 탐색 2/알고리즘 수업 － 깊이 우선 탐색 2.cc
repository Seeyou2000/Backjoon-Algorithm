#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> graph[100001];
bool visited[100001];
int order[100001];
int cnt;

void dfs(int v)
{
	visited[v] = true;
	cnt++;
	order[v] += cnt;
	for (int i = 0; i < graph[v].size(); i++)
	{
		int x = graph[v][i];
		if (!visited[x])
		{
			visited[x] = true;
			dfs(x);
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
		sort(graph[i].begin(), graph[i].end(), greater<int>());

	dfs(R);

	for (int i = 1; i <= N; i++)
		cout << order[i] << "\n";

	return 0;
}