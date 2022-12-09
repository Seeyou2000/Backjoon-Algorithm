#include <iostream>
using namespace std;

int arr[6];
int sum;

int main()
{
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << sum * 5;
	return 0;
}