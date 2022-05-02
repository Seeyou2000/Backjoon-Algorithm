#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int cnt = 0;
	cin >> n;

	while (n >= 0) {
		if (n == 1) {
			cout << -1;
			return 0;
		}
		if (n % 5 == 0) {
			cnt += (n / 5);
			cout << cnt;
			return 0;
		}
		n -= 2;
		cnt++;
	}
	cout << cnt;
	return 0;
}