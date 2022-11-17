#include <iostream>
#include <cmath>
using namespace std;

char arr[101][101];
int idx = 0;

int main() {
	int N;
	cin >> N;
	while (N--)
	{
		string str;
		cin >> str;
		int sqrt_str = sqrt(str.length());
		int k = sqrt_str - 1;

		for (int i = 0; i < sqrt_str; i++)
		{
			for (int j = 0; j < sqrt_str; j++)
			{
				arr[i][j] = str[idx];
				idx++;
			}
		}
		for (int i = 0; i < sqrt_str; i++)
		{
			for (int j = 0; j < sqrt_str; j++)
			{
				cout << arr[j][k];
			}
			k--;
		}
		cout << "\n";
		idx = 0;
	}
	return 0;
}