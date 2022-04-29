#include <iostream>
using namespace std;

int main() {
	string s;
	cin >> s;
	cout << s.at(0);
	for (int i = 0; i < s.length() - 1; i++) {
		if (s.at(i) == '-') {
			int j = i;
			cout << s.at(j + 1);
		}
	}
	return 0;
}