#include <iostream>
using namespace std;

int arr[1000001];
int N, S;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	cin >> S;
	for (int i = 0; i < N && S > 0; i++) {
		int max = arr[i];
		int idx = i;
		for (int j = i + 1; j < N && j <= i + S; j++) {
			if (max < arr[j]) {
				max = arr[j];
				idx = j;
			}
		}
		for (int j = idx; j > i; j--) {
			int tmp;
			tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
			S--;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
}