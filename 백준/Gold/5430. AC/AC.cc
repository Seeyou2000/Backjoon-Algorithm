#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> dq;
	int T;
	
	cin >> T;
	while (T--) {
		dq.clear();
		int cnt = 0;
		int tmp = 0;
		int f = false;
		bool isEmpty = false;
		string str = "";
		int num = 0;
		cin >> str;
		cin >> num;
		string str2 = "";
		cin >> str2;
		for (int i = 0; i < str2.length(); i++) {
			if (str2[i] >= '0' && str2[i] <= '9') {
				tmp = tmp * 10 + str2[i] - '0';
				f = true;
			}
			else {
				if (f) {
					dq.push_back(tmp);
					tmp = 0;
					f = false;
				}
			}
		}
		if (num != dq.size()) {
			cout << "error" << "\n";
			continue;
		}
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'R') {
				cnt++;
			}
			if (str[i] == 'D') {
				if (cnt % 2 == 0) {
					if (dq.empty()) {
						isEmpty = true;
						break;
					}
					dq.pop_front();
				}
				else {
					if (dq.empty()) {
						isEmpty = true;
						break;
					}
					dq.pop_back();
				}
			}
		}
		if (isEmpty) {
			cout << "error" << "\n";
			continue;
		}
		if (cnt % 2 == 0) {
			cout << "[";
			while (!dq.empty()) {
				cout << dq.front();
				if (dq.size() != 1) {
					cout << ",";
				}
				dq.pop_front();
			}
			cout << "]" << "\n";
		}
		if (cnt % 2 == 1) {
			cout << "[";
			while (!dq.empty()) {
				cout << dq.back();
				if (dq.size() != 1) {
					cout << ",";
				}
				dq.pop_back();
			}
			cout << "]" << "\n";
		}
	}
	return 0;
}