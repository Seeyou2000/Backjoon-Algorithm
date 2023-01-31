#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	double a, b, c;
	cin >> a >> b >> c;
	double x = sqrt((a * a) / (b * b + c * c));
	cout << int(b * x) << " " << int(c * x);
	return 0;
}
