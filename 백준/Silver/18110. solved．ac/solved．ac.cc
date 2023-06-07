#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	double temp, result = 0;
	cin >> N;

	if (N == 0)
	{
		cout << 0 << "\n";
		return 0;
	}
	vector<int> v(N);

	temp = N * 0.15;
	temp = round(temp);
	
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());

	for (int i = temp; i < N - temp; i++)
	{
		result += v[i];
	}
	result /= (N - (2 * temp));
	cout << round(result) << "\n";
	return 0;
}