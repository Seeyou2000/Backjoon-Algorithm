#include <iostream>
#include <vector>
using namespace std;

int arr[1001];
int dp[1001];
int N, result;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}

	dp[1] = 1;
	result = dp[1];
	for (int i = 2; i <= N; i++)
	{
		for (int j = i-1; j >= 0; j--)
		{
			if (arr[i] > arr[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		result = max(dp[i], result);
	}
	cout << result;
}