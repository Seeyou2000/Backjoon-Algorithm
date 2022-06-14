#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int map[26][26];
int visited[26][26];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
int apart_complex;
int cnt;
int N;
vector<int> v;

void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || ny >= N || nx < 0 || nx >= N)
			continue;
		if (map[ny][nx] && !visited[ny][nx]) {
			visited[ny][nx]++;
			cnt++;
			dfs(ny, nx);
		}
	}
}

int main() {
	cin >> N;
	string str;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '1') map[i][j] = 1;
			else map[i][j] = 0;
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] && !visited[i][j]) {
				apart_complex++;
				visited[i][j]++;
				dfs(i, j);
				v.push_back(cnt + 1);
				cnt = 0;
			}
		}
	}
	sort(v.begin(), v.end());
	cout << apart_complex << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
	return 0;
}