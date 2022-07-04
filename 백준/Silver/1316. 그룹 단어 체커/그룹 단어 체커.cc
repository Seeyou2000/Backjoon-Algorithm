#include <iostream>
using namespace std;

int alpha[26];
int N, cnt;
bool flag;
string str;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	while (N--) {
		flag = false;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == str[i + 1]) continue;
			alpha[str[i] - 'a']++;
			if (alpha[str[i] - 'a'] > 1) {
				flag = true;
				break;
			}
		}
		if (!flag) {
			cnt++;
		}
		for (int i = 0; i < 26; i++) {
			alpha[i] = 0;
		}
	}
	cout << cnt;
	return 0;
}