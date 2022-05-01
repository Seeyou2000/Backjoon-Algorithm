#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int count = 0;
	int title = 665;
	string s;

	scanf("%d", &n);

	while (true) {
		++title;
		s = to_string(title);
		if (s.find("666") != -1) {
			++count;
		}
		if (count == n) {
			printf("%d\n", title);
			break;
		}
	}
	return 0;
}