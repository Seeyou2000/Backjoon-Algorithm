#include <iostream>
using namespace std;

char grill[12][12];

int main() {
	int T;
	int H, W;

	cin >> T;
	while (T--)
	{
		cin >> H >> W;
		for (int i = 0; i < H; i++)
		{
			for (int j = 0; j < W; j++)
			{
				cin >> grill[i][j];
			}
		}
		for (int i = 0; i < H; i++)
		{
			for (int j = W - 1; j >= 0; j--)
			{
				cout << grill[i][j];
			}
			cout << "\n";
		}
	}
}