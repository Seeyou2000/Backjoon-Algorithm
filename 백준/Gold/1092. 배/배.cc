#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<int> crane;
	int M;
	vector<int> box;
	int cnt = 0;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int crane_weight;
		cin >> crane_weight;
		crane.push_back(crane_weight);
	}
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		int box_weight;
		cin >> box_weight;
		box.push_back(box_weight);
	}

	sort(box.begin(), box.end(), greater<int>());
	sort(crane.begin(), crane.end(), greater<int>());

	if (box[0] > crane[0])
	{
		cout << -1;
		return 0;
	}

	while (!box.empty())
	{
		cnt++;
		for (int i = 0; i < crane.size(); i++)
		{
			for (int j = 0; j < box.size(); j++)
			{
				if (crane[i] >= box[j])
				{
					box.erase(box.begin() + j);
					break;
				}
			}
		}
	}
	cout << cnt;
	return 0;
}