#include <iostream>
#include <algorithm>
using namespace std;

int straw[1000001];
int ans;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> straw[i];
	}
	sort(straw, straw + n);
	for (int i = 2; i < n; i++)
	{
		if (straw[i - 1] + straw[i - 2] > straw[i])
		{
			ans = straw[i] + straw[i - 1] + straw[i - 2];
		}
	}
	if (ans == 0)
	{
		cout << -1;
		return 0;
	}
	cout << ans;
	return 0;
}
