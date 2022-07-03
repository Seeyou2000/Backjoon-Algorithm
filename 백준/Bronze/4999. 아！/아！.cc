#include <iostream>
using namespace std;

int main() {
	string str1;
	string str2;
	cin >> str1 >> str2;
	if (str1.length() < str2.length()) {
		cout << "no\n";
	}
	else {
		cout << "go\n";
	}
	return 0;
}