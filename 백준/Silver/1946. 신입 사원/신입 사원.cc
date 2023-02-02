#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N;
	int cnt = 0;
	vector<pair<int, int>> v(100001);
	cin >> T;

	while (T--)
	{
		v.clear();
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			int first, second;
			cin >> first >> second;
			v.push_back({ first, second });
		}
		sort(v.begin(), v.end());

		int temp = v[0].second;

		for (int i = 0; i < N; i++)
		{
			if (temp >= v[i].second)
			{
				cnt++;
				temp = v[i].second;
			}
		}
		cout << cnt << "\n";
		cnt = 0;
	}
}