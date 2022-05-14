#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string a, b;
	int cnt = 0;
	cin >> a >> b;
	if (a.length() != b.length()) {
		cout << 0 << '\n';
		return 0;
	}

	
	for (int i = 0; i < a.length(); i++) {
		if (a[i] == b[i] && a[i] == '8') {
			cnt++;
		}
		else if (a[i] != b[i]) {
			break;
		}
	}
	cout << cnt << '\n';
	return 0;
}