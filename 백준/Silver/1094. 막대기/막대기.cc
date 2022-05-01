#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	int i = 1;
	int j = 0;
	int branch = 64;

	cin >> x;
	while (x >= 0) {
		while ((branch >> i) >= x) {
			i++;
		}
		if ((x - 1) == 0) {
			j++;
			cout << j;
			return 0;
		}
		branch >>= i;
		x -= branch;
		j++;
		if ((x - branch) == 0) {
			cout << j;
			return 0;
		}
		branch = 64;
	}
	cout << j;
}