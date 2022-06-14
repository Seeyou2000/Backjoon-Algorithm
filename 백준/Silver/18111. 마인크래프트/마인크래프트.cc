#include <iostream>
using namespace std;

int N, M, B;
int map[501][501];
int height;
int Time;
int maxHeight;
int leastTime = 10000000000;
int build_block;
int remove_block;

int main() {
	ios_base::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	for (int h = 0; h <= 256; h++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				height = map[i][j] - h;
				if (height > 0) {
					remove_block += height;
				}
				else if (height < 0) {
					build_block -= height;
				}
			}
		}
		if (remove_block + B >= build_block) {
			Time = remove_block * 2 + build_block;
			if (leastTime >= Time) {
				leastTime = Time;
				maxHeight = h;
			}
		}
		remove_block = 0;
		build_block = 0;
	}
	cout << leastTime << " " << maxHeight << "\n";
	return 0;
}