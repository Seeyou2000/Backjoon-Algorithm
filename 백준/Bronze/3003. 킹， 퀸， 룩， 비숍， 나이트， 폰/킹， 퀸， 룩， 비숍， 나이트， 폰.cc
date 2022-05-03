#include <iostream>
using namespace std;

int main() {
	int king = 1;
	int queen = 1;
	int look = 2;
	int bishop = 2;
	int knight = 2;
	int pawn = 8;
	int Matching[6];
	for (int i = 0; i < 6; i++) {
		cin >> Matching[i];
	}
	cout << king - Matching[0] << " ";
	cout << queen - Matching[1] << " ";
	cout << look - Matching[2] << " ";
	cout << bishop - Matching[3] << " ";
	cout << knight - Matching[4] << " ";
	cout << pawn - Matching[5] << " ";
	return 0;
}