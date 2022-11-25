#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	if (str.length() == 2)cout << (str[0] - 48) + (str[1] - 48);
	else if (str.length() == 3)
	{
		if (str[1] == '0') cout << 10 + (str[2] - 48);
		else if (str[2] == '0') cout << (str[0] - 48) + 10;
	}
	else if (str.length() == 4) cout << 20;
	return 0;
}