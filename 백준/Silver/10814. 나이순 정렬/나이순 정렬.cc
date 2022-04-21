#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main() {
	int n;
	int age;
	string name;
	vector<pair<int, string>> v;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		v.push_back(pair<int, string>(age, name));
	}
	stable_sort(v.begin(), v.end(), comp);
	vector<pair<int, string>>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << iter->first << ' ' << iter->second << '\n';
	}
	return 0;
}