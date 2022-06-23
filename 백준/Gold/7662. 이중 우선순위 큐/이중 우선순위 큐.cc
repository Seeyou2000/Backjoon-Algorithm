#include <iostream>
#include <set>
using namespace std;

int main() {
	multiset<int> ms;
	int T, K, N;
	char a;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> K;
		for (int j = 0; j < K; j++) {
			cin >> a >> N;
			if (a == 'I') {
				ms.insert(N);
			}
			else if (a == 'D') {
				if (N == 1) {
					if (!ms.empty()) {
						multiset<int>::iterator it = ms.end();
						it--;
						ms.erase(it);
					}
				}
				else if (N == -1) {
					if (!ms.empty()) {
						multiset<int>::iterator it = ms.begin();
						ms.erase(it);
					}
					else {
						continue;
					}
				}
			}
		}
		if (!ms.empty()) {
			multiset<int>::iterator Fit = ms.begin();
			multiset<int>::iterator Eit = ms.end();
			Eit--;
			cout << *Eit << " " << *Fit << "\n";
			ms.clear();
		}
		else {
			cout << "EMPTY" << "\n";
			ms.clear();
		}
	}
}
