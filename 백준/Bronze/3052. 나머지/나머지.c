#include <stdio.h>

int main() {
	int arr[10];
	int arr2[10];
	int cnt = 0;
	int panbul = 0;
	int num = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);

		arr2[i] = arr[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		num = arr2[i];
		for (int j = i + 1; j < 10; j++) {
			if (num == arr2[j])
				panbul++;
		}
		if (panbul == 0) {
			cnt++;
		}
		panbul = 0;
	}
	printf("%d", cnt);
}