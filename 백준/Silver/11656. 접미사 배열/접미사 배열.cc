#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> v;

bool compare(const string& a, const string& b)
{
	return a < b;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;

	while (!str.empty())
	{
		v.push_back(str);
		str.erase(0, 1);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << "\n";
	}
}