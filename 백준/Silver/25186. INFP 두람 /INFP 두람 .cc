#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int max_x = 0;
	long long int sum = 0;
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		long long int x;
		cin >> x;
		if (N == 1 && x == 1)
		{
			cout << "Happy";
			return 0;
		}
		max_x = max(max_x, x);
		sum += x;
	}

	if (max_x <= sum / 2)
		cout << "Happy";
	else
		cout << "Unhappy";
}