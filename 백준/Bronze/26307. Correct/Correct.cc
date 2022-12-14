#include <iostream>
using namespace std;

int main()
{
	int hh, mm, res = 0;
	cin >> hh >> mm;
	while (hh > 8) {
		res += mm;
		hh--;
		mm = 60;
	}
	cout << res;
}