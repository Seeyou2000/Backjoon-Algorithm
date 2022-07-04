#include <iostream>
#include <string>
using namespace std;

bool arr[10001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int N = 0;
	int M = 0;
	for (int M = 1; M <= 10000; M++) {
		str = to_string(M);
		while (N <= 10000) {
			N = stoi(str);
			for (int i = 0; i < str.length(); i++) {
				N += (str.at(i) - '0');
			}
			if (N >= 10000) break;
			arr[N] = true;
			str = to_string(N);
		}
		N = 0;
	}
	for (int i = 1; i < 10000; i++) {
		if (!arr[i]) cout << i << "\n";
	}
	return 0;
}