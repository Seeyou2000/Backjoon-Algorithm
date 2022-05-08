#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int> q;
	int N, K;
	int cnt = 1;
	int num;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		num = q.front();
		if (cnt == K) {
			cout << q.front();
			if (q.size() != 1) {
				cout << ", ";
			}
			q.pop();
			cnt = 1;
			continue;
		}
		q.pop();
		q.push(num);
		cnt++;
	}
	cout << ">";
}