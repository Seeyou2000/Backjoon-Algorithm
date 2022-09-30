#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;

int main()
{
	int N, M, num, ans = 2000000001;
	int a = 1, b = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	while (a < N)
	{
		if (v[a] - v[b] < M)
		{
			a++;
			continue;
		}
		if (v[a] - v[b] == M)
		{
			cout << M;
			return 0;
		}
		ans = min(ans, v[a] - v[b]);
		b++;
	}
	cout << ans;
	return 0;
}