#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[8001] = {};
	int n, num;
	int sum = 0;
	int avg = 0;
	int medium_value = 0;
	int poorest_value = 0;
	int range = 0;

	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> num;
		v[i] = num;
		arr[num + 4000]++;
		sum += num;
	}
	sort(v.begin(), v.end());
	avg = round((float)sum / n);

	int max = 0;
	int maxIndex = 0;
	for (int i = 0; i < 8001; i++) {
		if (max < arr[i]) {
			max = arr[i];
			maxIndex = i;
		}
	}
	for (int i = maxIndex + 1; i < 8001; i++) {
		if (max == arr[i]) {
			maxIndex = i;
			break;
		}
	}
	poorest_value = maxIndex - 4000;

	medium_value = v[v.size() / 2];

	range = v[n - 1] - v[0];

	cout << avg << '\n';
	cout << medium_value << '\n';
	cout << poorest_value << '\n';
	cout << range;
	return 0;
}