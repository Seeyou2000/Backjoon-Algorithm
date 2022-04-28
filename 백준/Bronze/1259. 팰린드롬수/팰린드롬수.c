#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char arr[6];
	int len = 0;
	int cnt = 0;

	while (1) {
		scanf("%s", arr);
		len = strlen(arr);
		if (arr[0] == '0')
			break;
		for (int i = 0; i < len; i++) {
			if (arr[i] == arr[len - i - 1])
				cnt++;
		}
		if ((cnt / len) == 1)
			printf("yes\n");
		else
			printf("no\n");
		cnt = 0;
	}
	return 0;
}