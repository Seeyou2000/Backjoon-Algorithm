#include <iostream>
#include <vector>
using namespace std;

int dp[50001];

int main()
{
	int n;
	cin >> n;

	dp[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		int Min = 5;
		for (int j = 1; j * j <= i; j++)
		{
			int num = i - j * j;
			Min = min(Min, dp[num]);
		}
		dp[i] = Min + 1;
	}
	cout << dp[n];
	return 0;
}