#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, M;
	int isK = 0;
	int isM = 0;
	bool reverse = false;
	deque<int> dq;

	cin >> N >> K >> M;

	for (int i = 1; i <= N; i++)
	{
		dq.push_back(i);
	}

	while (!dq.empty())
	{
		if (isM == M)
		{
			if (!reverse)
			{
				reverse = true;
			}
			else
			{
				reverse = false;
			}
			isM = 0;
		}

		if (!reverse)
		{
			if (isK != K - 1)
			{
				dq.push_back(dq.front());
				isK++;
				dq.pop_front();
			}
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
				isK = 0;
				isM++;
			}
		}
		else
		{
			if (isK != K - 1)
			{
				dq.push_front(dq.back());
				isK++;
				dq.pop_back();
			}
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
				isK = 0;
				isM++;
			}
		}
	}
}