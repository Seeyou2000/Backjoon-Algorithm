#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int cnt = 0;
	cin >> str;

	for (int i = 1; i <= stoi(str); i++)
	{
		string s;
		s = to_string(i);
		if (s.length() == 1 || s.length() == 2)
		{
			cnt++;
		}
		if (s.length() == 3)
		{
			if ((s[1] - 48) - (s[0] - 48) == (s[2] - 48) - (s[1] - 48))
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}
