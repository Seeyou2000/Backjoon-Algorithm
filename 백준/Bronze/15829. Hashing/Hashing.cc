#include <iostream>
using namespace std;

const int M = 1234567891;

int main() {
	int n;
	long long int sum = 0, R = 1;

	cin >> n;
	char* str = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> str[i];
		str[i] -= 96;
	}
	for (int i = 0; i < n; i++) {
		sum = (sum + str[i] * R) % M;
		R = (R * 31) % M;
	}
	cout << sum;
	delete[] str;
}