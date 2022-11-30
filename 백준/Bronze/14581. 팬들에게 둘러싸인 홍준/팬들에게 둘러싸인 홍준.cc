#include <iostream>
using namespace std;

void Hongjoon(string str)
{
	cout << ":fan::fan::fan:" << "\n";
	cout << ":fan::" << str << "::fan:" << "\n";
	cout << ":fan::fan::fan:" << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;
	Hongjoon(str);
	return 0;
}