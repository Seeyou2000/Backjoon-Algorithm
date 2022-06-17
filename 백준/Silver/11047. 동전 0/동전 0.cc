#include <iostream>
#include <vector>
using namespace std;

vector<int> v1;
vector<int> v2;
int N, K, money;
int cnt;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> money;
		v1.push_back(money);
	}
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] <= K) {
			v2.push_back(v1[i]);
		}
	}
	for (int i = v2.size() - 1; i >= 0; i--) {
		cnt += (K / v2[i]);
		K %= v2[i];
	}
	cout << cnt << "\n";
	return 0;
}