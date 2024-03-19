#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, A, B;
	cin >> N >> A >> B;
	if (N > B) { cout << "Bus"; return 0; }
	else
	{
		if (A == B) cout << "Anything";
		else if (A > B) cout << "Subway";
		else if (A < B) cout << "Bus";
	}
	return 0;
}