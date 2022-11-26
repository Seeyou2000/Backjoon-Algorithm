#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

vector<int> graph[100001];
bool visited[100001];
int order[100001];
int cnt = 0;

void dfs(int v)
{
	order[v] = cnt;
	visited[v] = true;
	for (int i = 0; i < graph[v].size(); i++)
	{
		int x = graph[v][i];
		if (!visited[x])
		{
			cnt++;
			visited[x] = true;
			dfs(x);
		}
	}
	cnt--;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	memset(order, -1, sizeof(int) * 100001);

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