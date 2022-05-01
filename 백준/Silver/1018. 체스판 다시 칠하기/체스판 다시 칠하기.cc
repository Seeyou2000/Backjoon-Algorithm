#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	char chess[51][51];
	int N, M;
	int cnt = 0;
	int cnt2 = 0;
	int a, b;
	int check[2000] = { 0 };
	int check2[2000] = { 0 };
	int m = 0;
	int n = 0;

	scanf("%d %d", &N, &M);

	a = N - 8;
	b = M - 8;

	for (int i = 0; i < N; i++) {
		while (getchar() != '\n');
		for (int j = 0; j < M; j++) {
			scanf("%c", &chess[i][j]);
		}
	}

	for (int k = 0; k <= a; k++) {
		for (int l = 0; l <= b; l++) {
			for (int i = 0 + k; i < 8 + k; i++) {
				for (int j = 0 + l; j < 8 + l; j++) {
					if (((i + j) % 2 == 0)) {
						if (chess[i][j] != 'B')
							cnt++;
					}
					if (((i + j) % 2 == 1)) {
						if (chess[i][j] != 'W')
							cnt++;
					}
				}
			}
			check[m] = cnt;
			cnt = 0;
			m++;
		}
	}
	for (int k = 0; k <= a; k++) {
		for (int l = 0; l <= b; l++) {
			for (int i = 0 + k; i < 8 + k; i++) {
				for (int j = 0 + l; j < 8 + l; j++) {
					if (((i + j) % 2 == 0)) {
						if (chess[i][j] != 'W')
							cnt2++;
					}
					if (((i + j) % 2 == 1)) {
						if (chess[i][j] != 'B')
							cnt2++;
					}
				}
			}
			check2[n] = cnt2;
			cnt2 = 0;
			n++;
		}
	}
	sort(check, check + m);
	sort(check2, check2 + n);
	if (check[0] <= check2[0])
		printf("%d", check[0]);
	else
		printf("%d", check2[0]);
}