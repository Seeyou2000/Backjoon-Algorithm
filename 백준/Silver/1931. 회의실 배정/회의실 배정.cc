#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>>v;
vector<pair<int, int>>result;
int N;

bool compare(const pair<int,int> a, const pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else {
		return a.second < b.second;
	}
}

int main() {
	int start, end;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		v.push_back(make_pair(start, end));
	}
	sort(v.begin(), v.end(), compare);
	result.push_back(v[0]);
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first >= result[result.size() - 1].second) {
			result.push_back(v[i]);
		}
	}
	cout << result.size() << "\n";
	return 0;
}