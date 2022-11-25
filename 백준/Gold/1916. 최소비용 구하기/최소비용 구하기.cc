#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

const int INF = 0xfffffff;

vector<pair<int, int>>graph[1001];

vector<int> Dijkstra(int start, int V, vector<pair<int, int>>* graph)
{
	vector<int> dist(V, INF);
	priority_queue<pair<int, int>> pq;

	dist[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty())
	{
		int cur_dist = -pq.top().first;
		int cur_node = pq.top().second;
		pq.pop();

		if (dist[cur_node] < cur_dist)
			continue;

		for (int i = 0; i < graph[cur_node].size(); i++)
		{
			int next_dist = cur_dist + graph[cur_node][i].second;
			int next_node = graph[cur_node][i].first;
			if (next_dist < dist[next_node])
			{
				dist[next_node] = next_dist;
				pq.push({ -next_dist,next_node });
			}
		}
	}
	return dist;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int V, E, K, L;
	cin >> V >> E;

	for (int i = 0; i < E; i++)
	{
		int u, v, w;
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
	}
	cin >> K >> L;
	vector<int> dist = Dijkstra(K, V + 1, graph);
	cout << dist[L];
	return 0;
}