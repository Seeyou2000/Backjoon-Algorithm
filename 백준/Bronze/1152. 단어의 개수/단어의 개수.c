#include <stdio.h>
#include <string.h>

int main() {
	int cnt = 0;
	int len = 0;
	int Space = 0;
	char arr[1000001];

	gets(arr);

	len = strlen(arr);

	for (int i = 1; i < len; i++) {
		if ((arr[i - 1] != 32) && (arr[i] == 32)) {
			cnt++;
		}
	}

	if (arr[len - 1] == 32) {
		cnt--;
	}

	printf("%d", cnt + 1);

	return 0;
}