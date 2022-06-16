#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, r, c;
	int result = 0;
	cin >> N >> r >> c;

	while (N--) {
		if (r < pow(2, N) && c < pow(2, N))
			result += pow(2, N) * pow(2, N) * 0;
		else if (r < pow(2, N) && c >= pow(2, N)) {
			result += pow(2, N) * pow(2, N) * 1;
			c -= pow(2, N);
		}
		else if (r >= pow(2, N) && c < pow(2, N)) {
			result += pow(2, N) * pow(2, N) * 2;
			r -= pow(2, N);
		}
		else {
			result += pow(2, N) * pow(2, N) * 3;
			r -= pow(2, N);
			c -= pow(2, N);
		}
	}
	cout << result << "\n";
	return 0;
}