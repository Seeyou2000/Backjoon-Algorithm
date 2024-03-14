#include <iostream>
using namespace std;

int main()
{
	int lamda;
	cin >> lamda;
	if (lamda <= 780 && lamda >= 620) cout << "Red";
	if (lamda < 620 && lamda >= 590) cout << "Orange";
	if (lamda < 590 && lamda >= 570) cout << "Yellow";
	if (lamda < 570 && lamda >= 495) cout << "Green";
	if (lamda < 495 && lamda >= 450) cout << "Blue";
	if (lamda < 450 && lamda >= 425) cout << "Indigo";
	if (lamda < 425 && lamda >= 380) cout << "Violet";
	return 0;
}