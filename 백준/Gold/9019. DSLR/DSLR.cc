#include <iostream>
#include <queue>
using namespace std;

bool visited[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	while (T--)
	{
		int A, B;
		cin >> A >> B;

		queue<int> q;
		string str[10001];

		bool visited[10001] = { false };

		q.push(A);

		while (1)
		{
			int current = q.front();
			q.pop();

			int S = current - 1;
			if (S == -1)
				S = 9999;
			if (S == B)
			{
				cout << str[current] + 'S' << "\n";
				break;
			}
			else
			{
				if (!visited[S])
				{
					visited[S] = true;
					q.push(S);
					str[S] = str[current] + 'S';
				}
			}

			int D = current * 2 % 10000;
			if (D == B)
			{
				cout << str[current] + "D" << "\n";
				break;
			}
			else
			{
				if (!visited[D])
				{
					visited[D] = true;
					q.push(D);
					str[D] = str[current] + 'D';
				}
			}

			int L = (current % 1000) * 10 + (current / 1000);
			if (L == B)
			{
				cout << str[current] + 'L' << "\n";
				break;
			}
			else
			{
				if (!visited[L])
				{
					visited[L] = true;
					q.push(L);
					str[L] = str[current] + 'L';
				}
			}

			int R = (current % 10) * 1000 + current / 10;
			if (R == B)
			{
				cout << str[current] + 'R' << "\n";
				break;
			}
			else
			{
				if (!visited[R])
				{
					visited[R] = true;
					q.push(R);
					str[R] = str[current] + 'R';
				}
			}
		}
	}
}