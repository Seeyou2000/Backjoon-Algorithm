#include <iostream>
using namespace std;

const int M = 1000000007;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int first = 1;
	long long int second = 1;
	long long int third = 0;
	long long int n;
	cin >> n;
	for (int i = 3; i <= n; i++)
	{
		third = second;
		second = (first + second) % M;
		first = third;
	}
	cout << second << " " << n - 2;
}