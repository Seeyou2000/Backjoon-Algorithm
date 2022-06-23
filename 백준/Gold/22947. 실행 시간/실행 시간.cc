#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int inDegree[101];
int T[101];
int num[3];
vector<int> v[101];
int N, M, K, E;
int result = 987654321;

int TopologySort() {
    int dp[101] = { 0, };
    dp[1] = T[1];
    int inDegree2[101];
    memcpy(inDegree2, inDegree, sizeof(inDegree));
    queue<int> q;
    for (int i = 1; i <= N; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < v[x].size();i++) {
            int next = v[x][i];
            bool isZero = false;
            for (int j = 0; j < K; j++) {
                if (next == num[j]) {
                    isZero = true;
                    break;
                }
            }
            if (isZero) {
                dp[next] = max(dp[next], dp[x]);
            }
            else {
                dp[next] = max(dp[next], T[next] + dp[x]);
            }
            inDegree2[next]--;
            if (inDegree2[next] == 0) {
                q.push(next);
            }
        }
    }
    return dp[E];
}

void combination(int idx, int cnt) {
    if (cnt == K) {
        int tmp = TopologySort();
        result = (result > tmp) ? tmp : result;
        return;
    }
    if (idx > N) return;
    combination(idx + 1, cnt);
    if (idx != E) {
        num[cnt] = idx;
        combination(idx + 1, cnt + 1);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> K;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
    }
    for (int i = 1; i <= M; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        inDegree[b]++;
    }
    for (int i = 1; i <= N; i++) {
        if (v[i].size() == 0) {
            E = i; 
            break;
        }
    }

    combination(2, 0);
    cout << result;
}