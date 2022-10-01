#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
	int n, num;
	set<int> s;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		s.insert(num);
	}

	set<int>::iterator iter;

	for (iter = s.begin(); iter != s.end(); iter++)
	{
		cout << *iter << " ";
	}
}