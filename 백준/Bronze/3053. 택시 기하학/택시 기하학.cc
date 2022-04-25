#define PI 3.141592653589793238462643383279502884197169399375
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a;
	scanf("%lf", &a);
	printf("%lf\n", pow(a,2) * PI);
	printf("%lf\n", 2 * a * a);
	return 0;
}