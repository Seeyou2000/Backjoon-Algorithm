#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int result = 0;
	int comp = 0;
	int k;
	cin >> N;
	k = N;
	vector<int> v(N);
	for (int i = 0; i < v.size(); i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end(), greater<int>());
	result = v[v.size() - 1] * N;
	for (int i = 0; i < N - 1; i++) {
		v.pop_back();
		k--;
		comp = v[v.size() - 1] * k;
		if (result < comp) {
			result = comp;
		}
	}
	cout << result;
	return 0;
}