#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int N;
vector<int> v[501];
int inDegree[501];
int cost[501];
int dp[501];

void TopologySort()
{
	queue<int> q;
	for (int i = 1; i <= N; i++)
	{
		if (inDegree[i] == 0)
		{
			q.push(i);
			dp[i] = cost[i];
		}
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++)
		{
			int next = v[x][i];
			if (--inDegree[next] == 0)
			{
				q.push(next);
			}
			dp[next] = max(dp[next], cost[next] + dp[x]);
		}
	}
	for (int i = 1; i <= N; i++)
	{
		cout << dp[i] << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> cost[i];
		int time;
		cin >> time;
		while (time != -1)
		{
			inDegree[i]++;
			v[time].push_back(i);
			cin >> time;
		}
	}
	TopologySort();
	return 0;
}