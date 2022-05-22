#include <iostream>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int* A = new int[N];
	int* B = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	}
	cout << "비와이";
	delete[] A;
	delete[] B;
	return 0;
}