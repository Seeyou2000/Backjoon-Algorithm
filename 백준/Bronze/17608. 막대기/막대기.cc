#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
	stack<int> st;
	int N, num, chk, cnt = 1;

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		st.push(num);
	}
	chk = st.top();
	while (!st.empty())
	{
		if (st.top() > chk)
		{
			chk = st.top();
			cnt++;
		}
		st.pop();
	}
	cout << cnt;
}