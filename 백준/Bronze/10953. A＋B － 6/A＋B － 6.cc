#include <iostream>
using namespace std;

int main() {
	int a;
	char arr[3];

	cin >> a;

	int* hap = new int[a];

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> arr[j];
			hap[i] = (arr[0] - 48) + (arr[2] - 48);
		}
	}
	for (int i = 0; i < a; i++) {
		cout << hap[i] << endl;
	}
	delete[]hap;
	return 0;
}