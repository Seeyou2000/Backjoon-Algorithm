#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> v;
	string str, bomb;

	cin >> str >> bomb;

	for (int i = 0; i < str.size(); i++)
	{
		v.push_back(str[i]);
		if (v.size() >= bomb.size())
		{
			bool isBomb = true;
			for (int j = 0; j < bomb.size(); j++)
			{
				if (v[v.size() - bomb.size() + j] != bomb[j])
				{
					isBomb = false;
					break;
				}
			}
			if (isBomb)
			{
				for (int j = 0; j < bomb.size(); j++)
				{
					v.pop_back();
				}
			}
		}
	}
	if (v.empty())
	{
		cout << "FRULA";
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i];
		}
	}
	return 0;
}