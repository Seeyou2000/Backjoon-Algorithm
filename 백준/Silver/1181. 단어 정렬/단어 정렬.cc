#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

string word;

bool dictionary(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	return a.size() < b.size();
}

int main()
{
	int a, i;
	vector<string> v;

	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		cin >> word;
		v.push_back(word);
	}

	sort(v.begin(), v.end(), dictionary);

	v.erase(unique(v.begin(), v.end()), v.end());

	for (i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}