#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int inDegree[1001];
int Semester[1001];
vector<int> v[1001];
int N, M;

void topologySort() {
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		Semester[i] = 1;
		if (inDegree[i] == 0) {
			q.push(i);
		}
	}
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int i = 0; i < v[x].size(); i++) {
			int y = v[x][i];
			inDegree[y]--;
			if (inDegree[y] == 0) {
				q.push(y);
				Semester[y] = max(Semester[y], Semester[x] + 1);
			}
			
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	int start, end;
	for (int i = 0; i < M; i++) {
		cin >> start >> end;
		v[start].push_back(end);
		inDegree[end]++;
	}

	topologySort();

	for (int i = 1; i <= N; i++) {
		cout << Semester[i] << " ";
	}
}