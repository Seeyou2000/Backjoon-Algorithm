#include <iostream>
#include <stack>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string str;
	int arr[26];
	stack<double> s;

	cin >> N;
	cin >> str;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
			double x = s.top();
			s.pop();
			double y = s.top();
			s.pop();
			if (str[i] == '+') {
				s.push(y + x);
			}
			if (str[i] == '-') {
				s.push(y - x);
			}
			if (str[i] == '*') {
				s.push(y * x);
			}
			if (str[i] == '/') {
				s.push(y / x);
			}
		}
		else {
			s.push(arr[str[i] - 'A']);
		}
	}
	cout.precision(2);
	cout << fixed;
	cout << s.top() << "\n";
}