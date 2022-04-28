#include <iostream>
using namespace std;

int main() {
	int a, b;
	char arr[51][51];
	int cnt = 0;
	scanf("%d %d", &a, &b);

	for (int i = 0; i < a; i++) {
		while (getchar() == '\0');
		for (int j = 0; j < b; j++) {
			scanf("%c", &arr[i][j]);
		}
	}

	if (a <= b) {
		for (int i = 0; i < a; i++) {
			for (int j = i; j < a; j++) {
				for (int k = i; k < b; k++) {
					if ((arr[j - i][k - i] == arr[j][k - i]) && (arr[j - i][k - i] == arr[j - i][k]) && (arr[j - i][k - i] == arr[j][k])) {
						cnt = i + 1;
					}
				}
			}
		}
	}
	else {
		for (int i = 0; i < b; i++) {
			for (int j = i; j < b; j++) {
				for (int k = i; k < a; k++) {
					if ((arr[k - i][j - i] == arr[k - i][j]) && (arr[k - i][j - i] == arr[k][j - i]) && (arr[k - i][j - i] == arr[k][j])) {
						cnt = i + 1;
					}
				}
			}
		}
	}
	
	printf("%d", cnt * cnt);
	return 0;
}