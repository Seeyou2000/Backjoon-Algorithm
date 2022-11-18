#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int A, B;
	cin >> A >> B;
	if (A > B) {
		cout << A - B - 1 << "\n";
		for (long long int i = B + 1; i < A; i++) {
			cout << i << " ";
		}
		return 0;
	}
	if (A == B) {
		cout << 0;
		return 0;
	}
	cout << B - A - 1 << "\n";
	for (long long int i = A + 1; i < B; i++) {
		cout << i << " ";
	}
	return 0;
}