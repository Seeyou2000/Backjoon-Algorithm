#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	bool is_same_char = false;

	for (int i = 0; i < s.length() / 2; i++)
	{
		if (s[i] != s[s.length() - i - 1])
		{
			cout << s.length();
			return 0;
		}
		else if (s[i] != s[i + 1])
		{
			is_same_char = true;
		}
	}
	if (is_same_char)
		cout << s.length() - 1;
	else
		cout << -1;
	return 0;
}