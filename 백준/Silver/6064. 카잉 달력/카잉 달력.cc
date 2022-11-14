#include <iostream>
using namespace std;

int GCD(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int LCM(int a, int b)
{
	return a * b / GCD(a, b);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, M, N, x, y;
	cin >> T;
	while (T--)
	{
		cin >> M >> N >> x >> y;
		int end_day = LCM(M, N);
		int i;
		for (i = x; i <= end_day; i += M)
		{
			int temp;
			if (i % N == 0)
			{
				temp = N;
			}
			else
			{
				temp = i % N;
			}
			if (temp == y)
			{
				cout << i << "\n";
				break;
			}
		}
		if (i > end_day)
		{
			cout << -1 << "\n";
		}
	}
	return 0;
}