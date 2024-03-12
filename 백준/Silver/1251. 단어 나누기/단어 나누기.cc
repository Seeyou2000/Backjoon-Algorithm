#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string str;
	vector<string> answer_str;
	cin >> str;

	for (int i = 1; i < str.length() - 1; i++)
	{
		for (int j = 1 + i; j < str.length(); j++)
		{
			string s = str.substr(0, i);
			string t = str.substr(i, j - i);
			string r = str.substr(j, str.length() - j);
			reverse(s.begin(), s.end());
			reverse(t.begin(), t.end());
			reverse(r.begin(), r.end());
			answer_str.push_back(s + t + r);
		}
	}
	sort(answer_str.begin(), answer_str.end());
	cout << answer_str[0];
	return 0;
}