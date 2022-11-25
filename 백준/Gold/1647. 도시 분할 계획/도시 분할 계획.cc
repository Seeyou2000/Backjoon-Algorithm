#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getParent(int* set, int x)
{
	if (set[x] == x) return x;
	set[x] = getParent(set, set[x]);
	return set[x];
}

void unionParent(int* set, int a, int b)
{
	a = getParent(set, a);
	b = getParent(set, b);
	if (a < b)
		set[b] = a;
	else
		set[a] = b;
}

bool find(int* set, int a, int b)
{
	a = getParent(set, a);
	b = getParent(set, b);
	if (a == b)
		return true;
	else
		return false;
}

class Edge
{
public:
	int node[2];
	int distance;
	Edge(int a, int b, int distance)
	{
		this->node[0] = a;
		this->node[1] = b;
		this->distance = distance;
	}
	bool operator <(Edge& edge)
	{
		return this->distance < edge.distance;
	}
};

int main()
{
	int V, E;
	int start_V, end_V, edge_Weight;
	vector<Edge> v;
	
	cin >> V >> E;
	for (int i = 0; i < E; i++)
	{
		int start_V, end_V, edge_Weight;
		cin >> start_V >> end_V >> edge_Weight;
		v.push_back(Edge(start_V, end_V, edge_Weight));
	}
	sort(v.begin(), v.end());
	
	int* set = new int[V];
	for (int i = 0; i < V; i++)
	{
		set[i] = i;
	}
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (!find(set, v[i].node[0] - 1, v[i].node[1] - 1))
		{
			sum += v[i].distance;
			ans = v[i].distance;
			unionParent(set, v[i].node[0] - 1, v[i].node[1] - 1);
		}
	}
	cout << sum - ans;
	return 0;
}