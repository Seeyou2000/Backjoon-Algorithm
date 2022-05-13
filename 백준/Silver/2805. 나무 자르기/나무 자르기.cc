#include <iostream>
using namespace std;

int N, M;
int tree[1000001];

bool isTree(int cut) {
	int take = 0;
	for (int i = 0; i < N; i++) {
		if (tree[i] >= cut) {
			take += (tree[i] - cut);
		}
		if (take >= M) {
			return true;
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
	}

	int left = 0;
	int right = 1000000000;
	int mid;
	int result = 0;
	while (left <= right) {
		mid = (left + right) / 2;
		if (isTree(mid)) {
			result = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
}