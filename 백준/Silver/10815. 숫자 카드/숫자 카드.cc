#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;
vector<pair<int, int>> v2;
bool isExist[500000];

int main() {
	int N, M;
	int Ncard, Mcard;
	cin >> N;
	for (int i = 0; i < N; i++) 
	{
		cin >> Ncard;
		v.push_back(Ncard);
	}
	sort(v.begin(), v.end());
	cin >> M;
	for (int i = 0; i < M; i++) 
	{
		cin >> Mcard;
		v2.push_back({ Mcard, i });
	}

	for (int i = 0; i < M; i++) 
	{
		if (binary_search(v.begin(), v.end(), v2[i].first)) 
		{
			isExist[v2[i].second] = true;
		}
	}
	for (int i = 0; i < M; i++) 
	{
		cout << isExist[i] << " ";
	}
	return 0;
}