#include <stdio.h>

void Swap(long long int* x, long long int* y) {
	long long int tmp = *x;
	*x = *y;
	*y = tmp;
}

long long int GCD(long long int a, long long int b) {
	if (b == 0)
		return a;
	else
		GCD(b, a % b);
}

int main() {
	long long int num1, num2 = 0;
	long long int gcd = 0;
	
	scanf("%lld %lld", &num1, &num2);

	if (num1 > num2) {
		Swap(&num1, &num2);
	}

	gcd = GCD(num1, num2);

	while (gcd--) {
		printf("1");
	}

	return 0;
}