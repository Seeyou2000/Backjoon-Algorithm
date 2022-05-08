#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long S;
	long long i = 1;
	long long sum = 0;
	long long ans = 0;
	cin >> S;
	while (S >= sum) {
		sum += i;
		i++;
		ans++;
	}
	cout << ans - 1 << '\n';
}