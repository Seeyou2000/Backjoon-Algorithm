#include <iostream>

using namespace std;

int alpha_centauri(int distance) {
	int count = 0;
	int go = 1;
	int temp;
	while (distance != 0) {
		distance -= go;
		temp = (go * (go + 1) / 2);
		if (distance > temp) {
			if (distance - go < temp) {
				go--;
			}
			else {
				go++;
				temp = (go * (go + 1) / 2);
				if (distance < temp) {
					go--;
				}
			}
		}
		else if (distance == temp) {

		}
		else {
			go--;
		}
		count++;
	}
	return count;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		cout << alpha_centauri(y - x) << "\n";
	}
}