#include <iostream>
#include <queue>
using namespace std;

int N, M;
int map[101];
int move_map[101];
bool visited[101];

void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = true;
	while (!q.empty()) {
		int x = q.front();
		q.pop();
		for (int dice = 1; dice <= 6; dice++) {
			int y = dice + x;
            if(y > 100) continue;
			y = map[y];
			if (!visited[y]) {
				visited[y] = true;
				move_map[y] = move_map[x] + 1;
				q.push(y);
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 1; i <= 100; i++) {
		map[i] = i;
	}
	while (N--) {
		int a, b;
		cin >> a >> b;
		map[a] = b;
	}
	while (M--) {
		int a, b;
		cin >> a >> b;
		map[a] = b;
	}
	bfs(1);
	cout << move_map[100] << "\n";
	return 0;
}