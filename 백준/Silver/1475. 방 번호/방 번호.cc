#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int num[10];

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	int len = str.length();
	int exp = 0;

	for (int i = 0; i < len; i++)
	{
		if (str[i] == '0') {
			num[0]++;
		}
		if (str[i] == '1') {
			num[1]++;
		}
		if (str[i] == '2') {
			num[2]++;
		}
		if (str[i] == '3') {
			num[3]++;
		}
		if (str[i] == '4') {
			num[4]++;
		}
		if (str[i] == '5') {
			num[5]++;
		}
		if (str[i] == '6') {
			num[6]++;
		}
		if (str[i] == '7') {
			num[7]++;
		}
		if (str[i] == '8') {
			num[8]++;
		}
		if (str[i] == '9') {
			num[9]++;
		}
	}
	if ((num[6] + num[9]) % 2) {
		exp = (num[6] + num[9]) / 2 + 1;
	}
	else {
		exp = (num[6] + num[9]) / 2;
	}
	num[6] = 0;
	num[9] = 0;
	sort(num, num + 10);
	if (exp > num[9])
		cout << exp;
	else
		cout << num[9];
	return 0;
}