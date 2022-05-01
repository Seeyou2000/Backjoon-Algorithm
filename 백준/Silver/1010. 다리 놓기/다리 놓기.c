#include <stdio.h>

int Combination(int a, int b) {
	int gap = 1;
	int cnt = 1;
	if (a == b)
		return 1;
	for (int i = a + 1; i <= b; i++) {
		gap *= i;
		gap /= cnt;
		cnt++;
	}
	return gap;
}

int main() {
	int M, N;
	int test = 0;
	int Number_Of_Case = 0;

	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d", &N, &M);
		Number_Of_Case = Combination(N, M);
		printf("%d\n", Number_Of_Case);
	}
}