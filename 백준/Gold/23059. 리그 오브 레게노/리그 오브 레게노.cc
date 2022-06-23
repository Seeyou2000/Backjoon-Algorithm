#include <iostream>
#include <queue>
#include <unordered_map>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map<int, string> Itos;
unordered_map<string, int> Stoi;
int inDegree[400001];
vector<int> v[400001];
vector<int> result[400001];
queue<pair<int, int>> q;
int N;
int idx;

bool cmp(int a, int b) {
	return Itos[a] < Itos[b];
}

void TopologySort() {
	for (int i = 0; i < idx; i++) {
		if (inDegree[i] == 0) {
			q.push({ i,0 });
			result[0].push_back(i);
		}
	}

	for (int k = 0; k < idx;k++) {
		if (q.empty()) {
			cout << "-1\n";
			return;
		}
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int next = v[x][i];
			inDegree[next]--;
			if (inDegree[next] == 0) {
				q.push({ next, cnt + 1 });
				result[cnt + 1].push_back(next);
			}
		}
	}

	for (int i = 0;; i++) {
		if (!result[i].size())
			return;
		sort(result[i].begin(), result[i].end(), cmp);
		for (int j = 0; j < result[i].size(); j++) {
			cout << Itos[result[i][j]] << "\n";
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1, str2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str1 >> str2;
		if (Stoi.find(str1) == Stoi.end()) {
			Stoi.insert({ str1, idx });
			Itos.insert({ idx, str1 });
			idx++;
		}
		if (Stoi.find(str2) == Stoi.end()) {
			Stoi.insert({ str2, idx });
			Itos.insert({ idx, str2 });
			idx++;
		}
		int a = Stoi[str1];
		int b = Stoi[str2];
		v[a].push_back(b);
		inDegree[b]++;
	}

	TopologySort();
	return 0;
}