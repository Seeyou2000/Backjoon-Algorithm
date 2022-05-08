#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int time;
	int result = 0;
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> time;
		v.push_back(time);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j <= i; j++) {
			result += v[j];
		}
	}
	cout << result;
	return 0;
}