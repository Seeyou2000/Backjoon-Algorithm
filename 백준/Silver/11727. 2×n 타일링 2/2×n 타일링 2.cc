#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[1001];

int func(int n)
{
	dp[1] = 1;
	dp[2] = 3;
	if (dp[n] != 0)
	{
		return dp[n];
	}
	dp[n] = (func(n - 1) + 2 * func(n - 2)) % 10007;
	return dp[n];
}

int main()
{
	int n;
	cin >> n;
	cout << func(n) % 10007;
}