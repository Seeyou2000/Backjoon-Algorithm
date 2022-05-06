#include <stdio.h>

int main() {
	int a, b, v;
	double cnt = 0;
	int cnt2 = 0;
	
	scanf("%d %d %d", &a, &b, &v);
	
	if (a >= v)
		printf("1");
	else {
		cnt = (double)((double)(v - a) / (double)(a - b));
		cnt2 = (int)cnt;
		if ((cnt2 < cnt) && (cnt < cnt2 + 1))
			cnt2++;
		cnt2++;
		printf("%d", cnt2);
	}
	return 0;
}