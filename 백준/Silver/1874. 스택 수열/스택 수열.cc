#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	int temp = 0;
	vector<char> ch;
	vector<int> v1;
	vector<int> v2;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		v1.push_back(temp);
	}
	for (int i = 1; i <= n; i++) {
		v2.push_back(i);
		ch.push_back('+');
		while (!v2.empty() && v2.back() == v1[cnt]) {
			v2.pop_back();
			ch.push_back('-');
			cnt++;
		}
	}
	if (!v2.empty())
		cout << "NO";
	else {
		for (int i = 0; i < ch.size(); i++) {
			cout << ch[i] << '\n';
		}
	}
}