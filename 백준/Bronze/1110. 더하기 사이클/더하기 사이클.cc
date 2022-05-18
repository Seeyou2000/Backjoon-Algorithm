#include <iostream>
using namespace std;

int main() {
	int N, CloneN;
	int cnt = 0;
	cin >> N;
	CloneN = N;

	while (true) {
		N = (N % 10) * 10 + ((N / 10) + (N % 10)) % 10;
		cnt++;

		if (N == CloneN)
			break;
	}
	cout << cnt;
}