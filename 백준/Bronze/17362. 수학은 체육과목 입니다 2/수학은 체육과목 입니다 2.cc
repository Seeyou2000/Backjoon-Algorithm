#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	N %= 8;
	if (N == 0) {
		N = 2;
	}
	if (N == 7) {
		N = 3;
	}
	if (N == 6) {
		N = 4;
	}
	cout << N;
}