#include <iostream>
using namespace std;
int N;
bool map[129][129];
int wcnt, bcnt;

void func(int n, int x, int y) {
	bool b = true;
	bool w = true;
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (map[i][j] == 1) {
				w = false;
			}
			if (map[i][j] == 0) {
				b = false;
			}
		}
	}
	if (w) {
		wcnt++;
		return;
	}
	if (b) {
		bcnt++;
		return;
	}
	func(n / 2, x, y);
	func(n / 2, x + n / 2, y);
	func(n / 2, x, y + n / 2);
	func(n / 2, x + n / 2, y + n / 2);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}
	func(N, 1, 1);
	cout << wcnt << "\n" << bcnt;
	return 0;
}