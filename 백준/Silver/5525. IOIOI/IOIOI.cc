#include <iostream>
using namespace std;

char arr[1000001];
int S, N;
int cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> S;
	for (int i = 0; i < S; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < S; i++) {
		int j = 0;
		if (arr[i] == 'O') {
			continue;
		}
		else {
			while (arr[i + 1] == 'O' && arr[i + 2] == 'I') {
				j++;
				if (j == N) {
					cnt++;
					j--;
				}
				i += 2;
			}
		}
	}
	cout << cnt;
	return 0;
}