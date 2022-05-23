#include <iostream>
using namespace std;

int main() {
	int A, B, C, D, P;
	int result = 0;
	cin >> A >> B >> C >> D >> P;

	if (P < C) {
		if (A * P > B) {
			result = B;
		}
		else {
			result = A * P;
		}
	}
	else {
		if (A * P > (D * (P - C)) + B) {
			result = (D * (P - C)) + B;
		}
		else {
			result = A * P;
		}
	}
	cout << result;
	return 0;
}