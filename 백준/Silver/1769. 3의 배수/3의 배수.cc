#include <iostream>
#include <string>
using namespace std;

string Change(string s) {
	int sum = 0;
	for (int i = 0; i < s.length(); i++) {
		sum += (s.at(i) - '0');
	}
	s = to_string(sum);
	return s;
}

int main() {
	string str;
	int cnt = 0;
	cin >> str;
	while (str.length() != 1) {
		str = Change(str);
		cnt++;
	}
	cout << cnt << '\n';
	if (str == "3" || str == "6" || str == "9") {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
}