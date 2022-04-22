#include <iostream>
#include <cmath>
using namespace std;

const int M = 1000000;
const int P = 1500000;
int arr[P];

int main() {
	long long int N;
	cin >> N;

	if (N == 0)
		cout << N;
	else if (N == 1)
		cout << N;
	else {
		arr[0] = 0;
		arr[1] = 1;
		for (int i = 2; i < P; i++) {
			arr[i] = (arr[i - 1] + arr[i - 2]) % M;
		}
		cout << arr[N % P];
	}
	return 0;
}