#include <iostream>
using namespace std;

const long long int M = 1000000007;

long long int Solution(long long int coef, long long int exp)
{
	if (exp == 1)
	{
		return coef;
	}
	long long int temp = Solution(coef, exp / 2);
	if (exp % 2 == 1)
	{
		return temp % M * temp % M * coef % M;
	}
	return temp % M * temp % M;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int A, X;
	cin >> A >> X;
	cout << Solution(A % M, X) % M;
	return 0;
}