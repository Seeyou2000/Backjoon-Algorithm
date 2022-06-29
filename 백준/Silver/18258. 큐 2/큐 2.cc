#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	queue<int> q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string str;
		int a;
		cin >> str;
		if (str == "push") {
			cin >> a;
			q.push(a);
		}
		if (str == "pop") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		if (str == "size") {
			cout << q.size() << "\n";
		}
		if (str == "empty") {
			if (q.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		if (str == "front") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
			}
		}
		if (str == "back") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.back() << "\n";
			}
		}
	}
	return 0;
}