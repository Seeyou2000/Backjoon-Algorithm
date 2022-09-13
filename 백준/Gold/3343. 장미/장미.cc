#include <iostream>
using namespace std;

long long rosemin(long long N, long long A, long long B, long long C, long long D) {
	if (B * C < A * D) {
		swap(A, C);
		swap(B, D);
	}

	long long ans = 1e18;

	for (int x = 0; x < C; x++) {
		long long reminder = N - (long long)(x * A);
		long long y;
		if (reminder <= 0) {
			y = 0;
		}
		else {
			y = (reminder - 1) / C + 1;
		}

		long long cost = (long long)(B * x) + (long long)(D * y);
		if (ans > cost)
			ans = cost;
	}
	return ans;
}

int main() {
	long long N;
	long long A, B, C, D;
	cin >> N >> A >> B >> C >> D;
	cout << rosemin(N, A, B, C, D);
}