#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
	int N, answer = 0;
	priority_queue<int, vector<int>, greater<int>> pq;
	vector<int> v;

	cin >> N;

	if (N == 1)
	{
		cout << 0;
		return 0;
	}

	for(int i=0;i<N;i++)
	{
		int card;
		cin >> card;
		pq.push(card);
	}

	while (!pq.empty())
	{
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		answer = a + b;
		v.push_back(answer);
		if (pq.empty())
			break;
		pq.push(answer);
	}
	answer = 0;
	for (int i = 0; i < v.size(); i++)
	{
		answer += v[i];
	}
	cout << answer;
	return 0;
}