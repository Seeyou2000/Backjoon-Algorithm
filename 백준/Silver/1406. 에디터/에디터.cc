#include <iostream>
#include <list>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	list<char> l;
	string str;
	int M;
	
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		l.push_back(str[i]);
	}
	list<char>::iterator iter = l.end();
	cin >> M;
	while (M--)
	{
		char order;
		char letter;
		cin >> order;
		if (order == 'L')
		{
			if (iter == l.begin())
			{
				continue;
			}
			iter--;
		}
		else if (order == 'D')
		{
			if (iter == l.end())
			{
				continue;
			}
			iter++;
		}
		else if (order == 'B')
		{
			if (iter == l.begin())
			{
				continue;
			}
			iter = l.erase(--iter);
		}
		else if (order == 'P')
		{
			cin >> letter;
			l.insert(iter,letter);
		}
	}
	for (char i : l)
	{
		cout << i;
	}
}