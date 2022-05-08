#include <iostream>

using namespace std;

int sosu[1001];

int main() {
	int a;
	int arr[100];
	int cnt = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &arr[i]);
	}

	sosu[1] = true;


	for (int i = 2; i <= 100; i++) {
		for (int j = 2 * i; j <= 1000; j += i) {
			if (sosu[j] == false)
				sosu[j] = true;
		}
	}
	
	for (int i = 0; i < a; i++) {
		if (sosu[arr[i]] == false)
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}