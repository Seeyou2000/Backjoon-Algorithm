#include <iostream>
#include <algorithm>
using namespace std;

int storage[200001];
int sort_storage[200001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, ans;

	cin >> N;
	ans = N;

	for (int i = 1; i <= N; i++)
	{
		cin >> storage[i];
		sort_storage[i] = storage[i];
	}

	sort(sort_storage + 1, sort_storage + 1 + N);

	for (int i = N; i >= 1; i--)
	{
		if (storage[i] == sort_storage[ans])
			ans--;
	}

	cout << ans;
	return 0;
}