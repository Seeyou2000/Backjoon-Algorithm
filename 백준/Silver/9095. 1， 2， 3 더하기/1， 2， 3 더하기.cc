#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int n;
	int result = 1;
	int minus = 1;
	int dp[12] = { 0 };
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n;
		if (n == 1) {
			cout << dp[0] << '\n';
		}
		else if (n == 2) {
			cout << dp[1] << '\n';
		}
		else if (n == 3) {
			cout << dp[2] << '\n';
		}
		else {
			for (int j = 3; j < n; j++) {
				dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
			}
			cout << dp[n - 1] << '\n';
		}
	}
	return 0;
}