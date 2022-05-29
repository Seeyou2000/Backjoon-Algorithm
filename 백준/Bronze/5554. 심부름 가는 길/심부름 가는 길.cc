#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, result;
	int minute, second = 0;
	cin >> a >> b >> c >> d;
	result = a + b + c + d;
	minute = result / 60;
	second = result % 60;
	cout << minute << '\n' << second;
	return 0;
}