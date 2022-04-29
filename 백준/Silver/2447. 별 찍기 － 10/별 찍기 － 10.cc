#include <iostream>
using namespace std;

void star(int x, int y, int num) {
	if ((x / num) % 3 == 1 && (y / num) % 3 == 1) {
		cout << " ";
	}
	else {
		if (num / 3 == 0) {
			cout << "*";
		}
		else {
			star(x, y, num / 3);
		}
	}
}

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			star(i, j, num);
		}
		cout << '\n';
	}
	return 0;
}