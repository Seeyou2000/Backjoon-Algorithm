#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int cnt = 0;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'c')
		{
			if (str[i + 1] == '=')
			{
				cnt++;
				i++;
				continue;
			}
			if (str[i + 1] == '-')
			{
				cnt++;
				i++;
				continue;
			}
		}
		if (str[i] == 'd')
		{
			if (str[i + 1] == '-')
			{
				cnt++;
				i++;
				continue;
			}
			if (i <= str.length() - 2)
			{
				if (str[i + 1] == 'z' && str[i + 2] == '=')
				{
					cnt++;
					i += 2;
					continue;
				}
			}
		}
		if (str[i] == 'l' && str[i+1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}
		if (str[i] == 'n' && str[i+1] == 'j')
		{
			cnt++;
			i++;
			continue;
		}
		if (str[i] == 's' && str[i+1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		if (str[i] == 'z' && str[i+1] == '=')
		{
			cnt++;
			i++;
			continue;
		}
		cnt++;
	}
	cout << cnt;
}
