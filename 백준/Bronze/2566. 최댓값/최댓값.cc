#include <iostream>
#include <vector>
using namespace std;

int table[10][10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int MAX = 0;
	int row = 0;
	int column = 0;

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cin >> table[i][j];
			if (MAX <= table[i][j])
			{
				MAX = table[i][j];
				column = i;
				row = j;
			}
		}
	}
	cout << MAX << "\n" << column << " " << row;
}
