#include <iostream>
#include <vector>
using namespace std;

pair<int, int> pa;
pair<int, int> pb;

int main()
{
	int a, b, result = 0;
	cin >> a >> b;
	if (a % 4 != 0)
	{
		pa = { (a % 4),(a / 4) };
	}
	else
	{
		pa = { 4,(a / 4) - 1 };
	}
	if (b % 4 != 0)
	{
		pb = { (b % 4),(b / 4) };
	}
	else
	{
		pb = { 4,(b / 4) - 1 };
	}
	if (pa.first < pb.first)
	{
		result += (pb.first - pa.first);
	}
	else
	{
		result += (pa.first - pb.first);
	}
	if (pa.second < pb.second)
	{
		result += (pb.second - pa.second);
	}
	else
	{
		result += (pa.second - pb.second);
	}
	cout << result;
	return 0;
}