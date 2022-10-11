#include <iostream>
#include <cmath>

using namespace std;

bool isSosu(int n) {
	if (n <= 1)
		return false;
	if (n == 2)
		return true;
	if (n % 2 == 0)
		return false;
	for (int i = 3; i <= sqrt(n); i += 2) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n, count = 0;

	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		for (int i = n + 1; i <= 2 * n; i++) {
			if (isSosu(i))
				count++;
		}
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}