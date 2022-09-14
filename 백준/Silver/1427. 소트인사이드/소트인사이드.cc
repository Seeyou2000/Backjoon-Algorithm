#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main()
{
	char a[10];
	int i;

	scanf("%s", a);

	sort(a, a + strlen(a), greater<int>());

	printf("%s", a);
}