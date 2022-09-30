#include <iostream>
using namespace std;

int main()
{
	int N;
	string str;

	cin >> N;
	
	while (N--)
	{
		int arr[26] = { 0, };
		bool chk = true;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
		{
			arr[int(str[i] - 'A')]++;
			if (arr[int(str[i] - 'A')] == 3)
			{
				if (str.length() > i + 1 && str[i] == str[i + 1])
				{
					i++;
					arr[int(str[i] - 'A')] = 0;
				}
				else
				{
					chk = false;
					break;
				}
			}
		}
		if (chk)
		{
			cout << "OK\n";
		}
		else
		{
			cout << "FAKE\n";
		}

	}
}