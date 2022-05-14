#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<pair<int, int>>v;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	return a.second < b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v.begin(), v.end(), cmp);
	
	int Realworktime = 0;
	int time = 0;
	int result = v[0].second - v[0].first;
	int temp = 0;

	for (int i = 0; i < N; i++) {
		time = v[i].second;
		Realworktime += v[i].first;
		if (Realworktime > time) {
			cout << -1 << '\n';
			return 0;
		}
		temp = time - Realworktime;
		if (result > temp) {
			result = temp;
		}
	}
	cout << result;
}
