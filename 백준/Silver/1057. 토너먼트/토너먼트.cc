#include <iostream>

using namespace std;

int win(int num) {
	return num % 2 == 0 ? num / 2 : num / 2 + 1;
}

int main() {
	int n;
	int kim, im;

	cin >> n >> kim >> im;

	int round = 0;
	while (kim != im) {
		round++;
		kim = win(kim);
		im = win(im);
	}

	cout << round;
}