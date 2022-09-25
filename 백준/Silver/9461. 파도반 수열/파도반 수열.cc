#include <iostream>
using namespace std;

long long int dp[101];
int N, T;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;
	dp[5] = 2;

	while (T--)
	{
		cin >> N;
		if (N > 5)
		{
			for (int i = 6; i <= N; i++)
			{
				dp[i] = dp[i - 1] + dp[i - 5];
			}
		}
		cout << dp[N] << "\n";
	}
	return 0;
}