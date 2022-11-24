#include <stdio.h>
#include <string.h>

int main() {
	int num[3];
	int gop = 1;
	int len = 0;
	int cnt[10] = {0};
	char arr[10];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &num[i]);
		gop *= num[i];
	}

	sprintf(arr, "%d", gop);

	len = strlen(arr);

	for (int i = 0; i < len; i++) {
		cnt[arr[i] - 48]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", cnt[i]);
	}
    return 0;
}