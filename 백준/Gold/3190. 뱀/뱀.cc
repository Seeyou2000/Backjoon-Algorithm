#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int map[101][101];
deque<pair<int, int>> dq;
vector<pair<int, char>> v;
int timer = 0;
int dy[4] = { 1,-1,0,0 };
int dx[4] = { 0,0,1,-1 };

int Turn_Direction(int d, char c)
{
	if (c == 'L')
	{
		if (d == 0) return 3;
		else if (d == 1) return 2;
		else if (d == 2) return 0;
		else if (d == 3) return 1;
	}
	else if (c == 'D')
	{
		if (d == 0) return 2;
		else if (d == 1) return 3;
		else if (d == 2) return 1;
		else if (d == 3) return 0;
	}
}

int main()
{
	int N, K;
	int x = 0, y = 0, d = 0;
	int idx = 0;
	cin >> N >> K;
	while (K--)
	{
		int a, b;
		cin >> a >> b;
		map[a - 1][b - 1] = 1;
	}
	int L;
	cin >> L;
	for (int i = 0; i < L; i++)
	{
		int a;
		char b;
		cin >> a >> b;
		v.push_back({ a,b });
	}
	dq.push_back({ x,y });
	map[x][y] = -1;
	while (true) {
		timer++;

		int nx = x + dx[d];
		int ny = y + dy[d];

		if ((nx < 0 || ny < 0 || nx >= N || ny >= N) || map[nx][ny] == -1)
		{
			break;
		}
		else if (!map[nx][ny])
		{
			map[nx][ny] = -1;
			map[dq.back().first][dq.back().second] = 0;
			dq.pop_back();
			dq.push_front({ nx,ny });
		}
		else if (map[nx][ny])
		{
			map[nx][ny] = -1;
			dq.push_front({ nx,ny });
		}
		if (idx < v.size())
		{
			if (timer == v[idx].first)
			{
				if (v[idx].second == 'L')
					d = Turn_Direction(d, 'L');
				else if (v[idx].second == 'D')
					d = Turn_Direction(d, 'D');
				idx++;
			}
		}
		x = nx;
		y = ny;
	}
	cout << timer;
    return 0;
}