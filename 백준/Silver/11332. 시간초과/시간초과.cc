#include <iostream>
#include <cmath>
#define LL long long
#define MAX 100000000

using namespace std;
int C;
string S;
LL N, T, L;

void Input() {
	cin >> C;
}

void Settings() {
	if (S == "O(N)") {
		LL Sum = N * T;
		if (Sum <= (L * MAX)) {
			cout << "May Pass.\n";
		}
		else {
			cout << "TLE!\n";
		}
	}
	else if (S == "O(N^2)") {
		if (N >= 31623) {
			cout << "TLE!\n";
		}
		else {
			LL Sum = (N * N * T);
			if (Sum <= (L * MAX)) {
				cout << "May Pass.\n";
			}
			else {
				cout << "TLE!\n";
			}
		}
	}
	else if (S == "O(N^3)") {
		if (N >= 1001) {
			cout << "TLE!\n";
		}
		else {
			LL Sum = (N * N * N * T);
			if (Sum <= (L * MAX)) {
				cout << "May Pass.\n";
			}
			else {
				cout << "TLE!\n";
			}
		}
	}
	else if (S == "O(2^N)") {
		if (N >= 30) {
			cout << "TLE!\n";
		}
		else {
			LL Sum = (LL)pow(2, N) * T;
			if (Sum <= (L * MAX)) {
				cout << "May Pass.\n";
			}
			else {
				cout << "TLE!\n";
			}
		}
	}
	else if (S == "O(N!)") {
		if (N >= 13) {
			cout << "TLE!\n";
		}
		else {
			LL Sum = T;
			for (LL i = 1; i <= N; i++) {
				Sum *= i;
			}
			if (Sum <= (L * MAX)) {
				cout << "May Pass.\n";
			}
			else {
				cout << "TLE!\n";
			}
		}
	}
}

void Find_Answer() {
	while (C--) {
		cin >> S >> N >> T >> L;
		Settings();
	};
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	Input();
	Find_Answer();

	return 0;
}