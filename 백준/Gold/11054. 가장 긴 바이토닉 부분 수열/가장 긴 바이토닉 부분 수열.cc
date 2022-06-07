#include <iostream>
using namespace std;

int UP_DP[1001];
int DOWN_DP[1001];
int arr[1001];

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; i++) {
		UP_DP[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (arr[i] > arr[j] && UP_DP[i] < UP_DP[j] + 1) {
				UP_DP[i] = UP_DP[j] + 1;
			}
		}
	}
	for (int i = n; i >= 1; i--) {
		DOWN_DP[i] = 1;
		for (int j = n; j >= i; j--) {
			if (arr[i] > arr[j] && DOWN_DP[i] < DOWN_DP[j] + 1) {
				DOWN_DP[i] = DOWN_DP[j] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (ans < UP_DP[i] + DOWN_DP[i] - 1)
			ans = UP_DP[i] + DOWN_DP[i] - 1;
	}
	cout << ans << '\n';
	return 0;
}