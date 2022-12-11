#include <iostream>
using namespace std;

int bit[8];

int main()
{
	for (int i = 0; i < 8; i++)
	{
		cin >> bit[i];
		if (bit[i] > 1)
		{
			cout << "F";
			return 0;
		}
	}
	cout << "S";
	return 0;
}