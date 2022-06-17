#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string Name;
vector<string> v;
vector<string> w;
int N, K, cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < N + K; i++) {
		cin >> Name;
		v.push_back(Name);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 1; i++) {
		if (v[i] == v[i + 1]) {
			cnt++;
			w.push_back(v[i]);
		}
	}
	
	cout << cnt << "\n";
	for (int i = 0; i < w.size(); i++) {
		cout << w[i] << "\n";
	}
}