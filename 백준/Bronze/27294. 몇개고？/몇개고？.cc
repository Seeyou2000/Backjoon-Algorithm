#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, S;
	cin >> T >> S;

	if (T <= 11)
	{
		cout << 280;
	}
	else if (T >= 12 && T <= 16)
	{

		if (S)
		{
			cout << 280;
		}
		else
		{
			cout << 320;
		}
	}
	else 
	{
		cout << 280;
	}
}
