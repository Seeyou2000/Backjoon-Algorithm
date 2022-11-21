#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return GCD(b, a % b);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c, d;
	int molecular, denominator;
	cin >> a >> b >> c >> d;
	molecular = a * d + b * c;
	denominator = b * d;
	cout << molecular / GCD(molecular, denominator) << " " << denominator / GCD(molecular, denominator);
    return 0;
}