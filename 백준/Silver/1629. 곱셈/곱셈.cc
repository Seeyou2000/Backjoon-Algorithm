#include <iostream>
using namespace std;

int a, b, c;

long long int Involution(int a, int n)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return a;
	if (n % 2 == 1)
	{
		return Involution(a, n - 1) * a;
	}
	long long int tmp = Involution(a, n / 2);
	tmp %= c;
	return tmp * tmp % c;
}

int main()
{
	cin >> a >> b >> c;
	cout << Involution(a, b) % c;
}