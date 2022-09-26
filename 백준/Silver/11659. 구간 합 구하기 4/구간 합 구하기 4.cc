#include <iostream>
#include <vector>
using namespace std;

int N, M;
int arr[100001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b;

	cin >> N >> M;
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= N; i++)
	{
		arr[i] = arr[i - 1] + arr[i];
	}
	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		cout << arr[b] - arr[a - 1] << "\n";
	}
}