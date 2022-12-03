#include <iostream>
using namespace std;

int main()
{
	int n, m, nm, result = 0;
	cin >> n >> m >> nm;
	result = (n + 1) * (m + 1) / (nm + 1) - 1;
	cout << result;
	return 0;
}