#include <stdio.h>

int main()
{
	char str[1000001];
	int i;
	int max, index = 0;
	int num[26] = { 0, };

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 97)
			str[i] += 32;
		num[str[i] - 97]++;
	}

	max = num[0];
	
	for (i = 1; i < 26; i++)
	{
		if (max < num[i])
		{
			max = num[i];
			index = i;
		}
		else if (max == num[i] && num[i] != 0)
			index = -1;
	}

	if (index != -1)
		printf("%c", 65 + index);
	else
		printf("?\n");

	return 0;
}