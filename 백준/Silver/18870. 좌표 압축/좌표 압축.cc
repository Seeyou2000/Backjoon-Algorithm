#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;
vector<int> c;

bool compare(pair<int, int>a, pair <int, int>b) {
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int cnt = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> M;
		v.push_back(make_pair(M, i));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i].first == v[i + 1].first) {
			v[i].first = cnt;
		}
		else if (v[i].first < v[i + 1].first) {
			v[i].first = cnt;
			cnt++;
		}
	}
	v[v.size() - 1].first = cnt;
	
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " ";
	}
}