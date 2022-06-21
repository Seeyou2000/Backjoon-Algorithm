#include <iostream>
#define INF 10000000;
using namespace std;

int map[101][101];
int arr[101];
int N, M;

void FloydWarshall() {
	for (int v = 1; v <= N; v++) {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (map[i][v] + map[v][j] < map[i][j]) {
					map[i][j] = map[i][v] + map[v][j];
				}
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			arr[i] += map[i][j];
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			if (i != j)map[i][j] = INF;
		}
	}

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}
	
	FloydWarshall();

	int min = INF;
	int min_idx = 0;
	for (int i = 1; i <= N; i++) {
		if (arr[i] < min) {
			min = arr[i];
			min_idx = i;
		}
	}
	cout << min_idx;
	return 0;
}
