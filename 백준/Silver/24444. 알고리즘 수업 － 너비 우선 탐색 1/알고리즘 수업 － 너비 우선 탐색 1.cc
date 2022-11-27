#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> graph[100001];
int order[100001];
bool visited[100001];
queue<int> q;
int cnt = 0;

void bfs(int v)
{
	q.push(v);
	visited[v] = true;
	cnt++;
	order[v] = cnt;
	while (!q.empty())
	{
		int cur_node = q.front();
		q.pop();

		for (int i = 0; i < graph[cur_node].size(); i++)
		{
			int x = graph[cur_node][i];
			if (!visited[x])
			{
				visited[x] = true;
				cnt++;
				order[x] = cnt;
				q.push(x);
			}
		}
	}
}

int main()
{
	int N, M, R;
	scanf("%d %d %d", &N, &M, &R);
	for (int i = 0; i < M; i++)
	{
		int u, v;
		scanf("%d %d", &u, &v);
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; i++)
		sort(graph[i].begin(), graph[i].end());
	bfs(R);
	for (int i = 1; i <= N; i++)
		printf("%d\n", order[i]);

	return 0;
}