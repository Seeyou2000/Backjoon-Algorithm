#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	while (N--) {
		long long int lt, wt, le, we;
		cin >> lt >> wt >> le >> we;
		if (lt * wt > le * we) {
			cout << "TelecomParisTech\n";
		}
		else if (lt * wt < le * we) {
			cout << "Eurecom\n";
		}
		else {
			cout << "Tie\n";
		}
	}
	return 0;
}