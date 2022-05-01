#include <stdio.h>

int stair_ans[301];
int remember_stair[301];

int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d",&stair_ans[i]);
	}

	remember_stair[0] = stair_ans[0];
	remember_stair[1] = Max(stair_ans[0] + stair_ans[1], stair_ans[1]);
	remember_stair[2] = Max(stair_ans[0] + stair_ans[2], stair_ans[1] + stair_ans[2]);

	for (int i = 3; i < n; i++) {
		remember_stair[i] = Max(remember_stair[i - 3] + stair_ans[i - 1] + stair_ans[i], remember_stair[i - 2] + stair_ans[i]);
	}
	printf("%d\n", remember_stair[n - 1]);
}