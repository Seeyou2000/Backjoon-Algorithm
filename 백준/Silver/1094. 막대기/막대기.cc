#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	int cnt = 0;
	int branch = 64;

	cin >> x;
	while (x > 0) {
		if (branch > x) {
			branch /= 2;
		}
		else {
			cnt++;
			x -= branch;
		}
	}
	cout << cnt;
}