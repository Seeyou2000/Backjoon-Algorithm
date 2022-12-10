#include <iostream>
using namespace std;

int main()
{
	int home, away;
	int T, F, S, P, C;
	cin >> T >> F >> S >> P >> C;
	away = 6 * T + 3 * F + 2 * S + 1 * P + 2 * C;
	cin >> T >> F >> S >> P >> C;
	home = 6 * T + 3 * F + 2 * S + 1 * P + 2 * C;
	cout << away << " " << home;
}