#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int cnt = 0;
	cin >> N >> M;
	vector<pair<int, int>> v(M);
	for (int i = 0; i < M; i++) {
		cin >> v[i].first >> v[i].second;
	}
	int package_smallest = v[0].first;
	int individe_smallest = v[0].second;

	for (int i = 1; i < M; i++) {
		package_smallest = min(package_smallest, v[i].first);
		individe_smallest = min(individe_smallest, v[i].second);
	}
	if (package_smallest >= 6 * individe_smallest) {
		cnt = N * individe_smallest;
		cout << cnt << '\n';
		return 0;
	}
	while (N > 0) {
		if (N < 6) {
			if (package_smallest <= N * individe_smallest) {
				cnt += package_smallest;
				break;
			}
			else {
				cnt += N * individe_smallest;
				break;
			}
		}
		cnt += package_smallest;
		N -= 6;
	}
	cout << cnt << '\n';
	return 0;
}