#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	int x1, y1;
	int x2, y2;
	int x, y, r;
	int enter, escape;
	int n, T;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		enter = 0;
		escape = 0;

		while (n--) {
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r) {
				if ((x - x2)*(x - x2) + (y - y2) * (y - y2) < r * r){
					enter++;
				}
			}
			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) {
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r) {
					escape++;
				}
			}
		}
		cout << enter + escape << '\n';
	}
	return 0;
}