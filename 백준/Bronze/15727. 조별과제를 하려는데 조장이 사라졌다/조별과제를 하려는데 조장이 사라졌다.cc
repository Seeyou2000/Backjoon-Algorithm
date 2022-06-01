#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if (a % 5) {
		a /= 5;
		a++;
	}
	else {
		a /= 5;
	}
	cout << a;
}