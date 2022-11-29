#include <iostream>
#include <map>
using namespace std;

int main()
{
	int T, N;
	int ans;
	map<string, int>::iterator iter;
	cin >> T;
	while (T--)
	{
		string a, b;
		map<string, int>m;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> a >> b;
			m[b]++;
		}
		ans = 1;
		for (iter = m.begin(); iter != m.end(); iter++)
			ans *= (iter->second + 1);
		cout << ans - 1 << "\n";
	}
}