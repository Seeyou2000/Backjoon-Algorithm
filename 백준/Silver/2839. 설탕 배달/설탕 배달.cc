#include <iostream>

using namespace std;

int main()
{
	int weight;
	int temp = 0;

	cin >> weight;


	if ((weight % 5 == 0)) {
		cout << weight / 5;
	}
	else {
		temp = weight / 5;
		while (temp >= 0)
		{
			if ((weight - (5 * temp)) % 3 == 0) {
				cout << temp + (weight - 5 * temp) / 3;
				break;
			}
			temp--;
		}
	}

	if (temp == -1) {
		cout << -1;
	}
}