#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int n) {
	int r = 0;

	while (n != 0) {
		r *= 10;
		r += n % 10;
		n /= 10;
	}
	return r;
}

int main() {
	int k;
	int n;
	int reverse_n;
	int hap = 0;
	int len = 0;
	int cnt = 0;
	char palindrome[10];
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		scanf("%d", &n);
		reverse_n = reverse(n);
		hap = n + reverse_n;

		sprintf(palindrome, "%d", hap);
		len = strlen(palindrome);

		for (int i = 0; i < len; i++) {
			if (palindrome[i] == palindrome[len - i - 1]) {
				cnt++;
			}
		}
		if ((cnt / len) == 1) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
		cnt = 0;
	}
}