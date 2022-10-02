#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> v;
	int n, num, temp = 1;
	long cnt = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
	{
		if (v[i] >= temp)
		{
			cnt += (v[i] - temp);
			temp++;
		}
	}
	cout << cnt;
	return 0;
}