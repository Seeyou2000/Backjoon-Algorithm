#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int M, x;
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> str;
		if (str == "all" || str == "empty") {
			if (str == "all") {
				v.clear();
				for (int j = 1; j < 21; j++) {
					v.push_back(j);
				}
			}
			if (str == "empty") {
				v.clear();
			}
		}
		else {
			cin >> x;
			if (str == "add") {
				int check = 0;
				for (int j = 0; j < v.size(); j++) {
					if (v[j] == x) {
						check++;
					}
				}
				if (check == 0) {
					v.push_back(x);
				}
			}
			if (str == "remove") {
				for (int j = 0; j < v.size(); j++) {
					if (v[j] == x) {
						v.erase(v.begin() + j);
					}
				}
			}
			if (str == "check") {
				int check = 0;
				for (int j = 0; j < v.size(); j++) {
					if (v[j] == x) {
						check++;
					}
				}
				if (check > 0) {
					cout << 1 << "\n";
				}
				else {
					cout << 0 << "\n";
				}
			}
			if (str == "toggle") {
				int check = 0;
				for (int j = 0; j < v.size(); j++) {
					if (v[j] == x) {
						check++;
						v.erase(v.begin() + j);
					}
				}
				if (check == 0) {
					v.push_back(x);
				}
			}
		}
	}
	return 0;
}