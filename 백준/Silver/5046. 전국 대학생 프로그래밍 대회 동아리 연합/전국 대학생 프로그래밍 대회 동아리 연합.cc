#include <iostream>
using namespace std;

int person, money;

int main() {
	int hotelnum, hotelweeknum;
	cin >> person >> money >> hotelnum >> hotelweeknum;
	int cheapPay = 0x7fffffff;
	for (int i = 0; i < hotelnum; i++) {
		int hotelpay;
		int totalpay = 0;
		cin >> hotelpay;
		for (int j = 0; j < hotelweeknum; j++) {
			int temp;
			cin >> temp;
			if (temp >= person) {
				totalpay = person * hotelpay;
			}
		}
		if (totalpay != 0 && cheapPay > totalpay) {
			cheapPay = totalpay;
		}
	}
	if (cheapPay > money) {
		cout << "stay home";
	}
	else {
		cout << cheapPay;
	}
	return 0;
}