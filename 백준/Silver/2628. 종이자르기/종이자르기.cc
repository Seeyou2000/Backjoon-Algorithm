#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;
	int cut;
	int XY;
	int cut_idx;
	int count_x = 0;
	int count_y = 0;
	cin >> x >> y;
	cin >> cut;
	vector<int> x1;
	vector<int> x2;
	vector<int> y1;
	vector<int> y2;
	for (int i = 0; i < cut; i++) {
		cin >> XY >> cut_idx;
		if (XY == 1) {
			x1.push_back(cut_idx);
		}
		else if (XY == 0) {
			y1.push_back(cut_idx);
		}
	}
	sort(x1.begin(), x1.end());
	x1.push_back(x);
	sort(y1.begin(), y1.end());
	y1.push_back(y);
	x2.push_back(x1.front());
	y2.push_back(y1.front());
	for (int i = 0; i < x1.size() - 1; i++) {
		x2.push_back(x1[i + 1] - x1[i]);
	}
	for (int i = 0; i < y1.size() - 1; i++) {
		y2.push_back(y1[i + 1] - y1[i]);
	}
	sort(x2.begin(), x2.end());
	sort(y2.begin(), y2.end());
	cout << x2.back() * y2.back();

	return 0;
}