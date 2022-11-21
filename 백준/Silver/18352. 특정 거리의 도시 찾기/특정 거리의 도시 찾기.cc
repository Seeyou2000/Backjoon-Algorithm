#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<pair<int, int>> graph[300001];

const int INF = 987654321;
bool flag = false;

vector<int> Dijkstra(int start, int V, vector<pair<int, int>>* graph)
{
	vector<int> dist(V, INF);
	priority_queue<pair<int, int>> pq;

	dist[start] = 0;
	pq.push({ 0,start });

	while (!pq.empty())
	{
		int current_dist = -pq.top().first;
		int current_node = pq.top().second;
		pq.pop();
		for (int i = 0; i < graph[current_node].size(); i++)
		{
			int next_node = graph[current_node][i].first;
			int next_dist = current_dist + graph[current_node][i].second;

			if (next_dist < dist[next_node])
			{
				dist[next_node] = next_dist;
				pq.push({ -next_dist, next_node });
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

	int V, E, K, X;
	cin >> V >> E >> K >> X;
	for (int i = 0; i < E; i++)
	{
		int start_V, end_V;
		cin >> start_V >> end_V;
		graph[start_V - 1].push_back({ end_V - 1, 1 });
	}
	
	vector<int> dist = Dijkstra(X - 1, V, graph);
	vector<int> v;

	for (int i = 0; i < dist.size(); i++)
	{
		if (dist[i] == K)
		{
			v.push_back(i + 1);
			flag = true;
		}
	}
	if (!flag)
	{
		cout << -1 << "\n";
		return 0;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
	return 0;
}