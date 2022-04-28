#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b;
	int num[1000001] = {0};

	scanf("%d %d", &a, &b);

	num[1] = true;

	for (int i = 2; i <= sqrt(b); i++) {
		for (int j = 2 * i; j <= b; j += i) {
			if (num[j] == false)
				num[j] = true;
		}
	}

	for (int i = a; i <= b; i++) {
		if (!num[i])
			printf("%d\n", i);
	}
	return 0;
}