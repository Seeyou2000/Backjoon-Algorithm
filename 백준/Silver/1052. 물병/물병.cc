#include <iostream>
using namespace std;

int Water(int n) {
	int cnt = 0;
	while (n > 0) {
		if (n % 2 == 1) {
			cnt++;
		}
		n /= 2;
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	int temp = 0;
	int ans = 0;

	cin >> N >> K;
	if (N <= K) {
		cout << 0 << '\n';
	}
	else {
		while (true) {
			temp = Water(N);
			if (temp <= K)
				break;
			ans++;
			N++;
		}
		cout << ans << '\n';
	}
	return 0;
}