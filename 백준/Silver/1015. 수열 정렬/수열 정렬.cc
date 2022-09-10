#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
vector<int> v2;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int Pnum;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Pnum;
		v2.push_back(Pnum);
		v.push_back({ Pnum,i });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++)
	{
		v[i].second = i;
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (v2[i] == v[j].first)
			{
				if (i == N - 1)
				{
					cout << v[j].second;
					return 0;
				}
				cout << v[j].second << " ";
				v[j].first = -1;
				break;
			}
		}
	}
	return 0;
}