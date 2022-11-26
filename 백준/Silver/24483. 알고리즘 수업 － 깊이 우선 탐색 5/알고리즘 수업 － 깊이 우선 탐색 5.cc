#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
using namespace std;

vector<int> graph[100001];
bool visited[100001];
long long int depth[100001];
long long int order[100001];
long long int cnt = 0;
long long int visit = 0;

void dfs(int v)
{
	visit++;
	order[v] = visit;
	depth[v] = cnt;
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

	memset(depth, -1, sizeof(int) * 100001);

	long long int ans = 0;
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

	dfs(R);

	for (int i = 1; i <= N; i++)
		ans += (depth[i] * order[i]);

	cout << ans;
	return 0;
}