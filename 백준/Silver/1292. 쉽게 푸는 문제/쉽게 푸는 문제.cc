#include <iostream>
using namespace std;

int arr[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int A, B;
	int idx = 0;
	int result = 0;
	cin >> A >> B;

	for (int i = 1; i < 1001; i++) {
		for (int j = 0; j < i && idx < 1000; j++) {
			arr[idx++] = i;
		}
	}

	for (int i = A - 1; i < B; i++) {
		result += arr[i];
	}
	cout << result;
	return 0;
}
