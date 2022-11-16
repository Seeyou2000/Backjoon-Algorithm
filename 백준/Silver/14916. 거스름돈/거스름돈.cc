#include <iostream>
using namespace std;

int main()
{
	int n;
	int cnt = 0;
	cin >> n;
	if (n == 1 || n == 3)
	{
		cout << -1; 
		return 0;
	}
	while (n > 0)
	{
		if (n % 5 == 0)
		{
			cnt += (n / 5);
			cout << cnt;
			return 0;
		}
		n -= 2;
		cnt++;
	}
	cout << cnt;
	return 0;
}