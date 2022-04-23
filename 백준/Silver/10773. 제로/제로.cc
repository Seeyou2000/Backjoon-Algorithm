#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	stack<int> s;
	int n, k;
	int sum = 0;
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k;
		if (k != 0) {
			s.push(k);
		}
		else {
			s.pop();
		}
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}