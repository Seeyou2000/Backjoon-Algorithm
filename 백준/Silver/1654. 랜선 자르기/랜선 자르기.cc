#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, k;
vector<int> lan;

bool isCompare(int len) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		count += lan[i] / len;
	}
	if (count >= k)
		return true;
	else
		return false;
}

void Find_Lan() {
	sort(lan.begin(), lan.end());
	unsigned int left = 1;
	unsigned int right = lan[lan.size() - 1];
	unsigned int result = 0;

	while (left <= right) {
		unsigned int mid = (left + right) / 2;
		if (isCompare(mid)) {
			result = max(result, mid);
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << result;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> k;
	lan.assign(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> lan[i];
	}

	Find_Lan();
	return 0;
}