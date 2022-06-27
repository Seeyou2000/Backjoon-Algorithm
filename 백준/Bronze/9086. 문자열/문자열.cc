#include <iostream>
using namespace std;

int main() {
	int T;
	string str;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> str;
		cout << str.at(0) << str.at(str.length() - 1) << "\n";
	}
	return 0;
}