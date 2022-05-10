#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, tower_height;
    stack<pair<int, int>> s;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tower_height;

        while (!s.empty()) {
            if (tower_height < s.top().second) {
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if (s.empty()) {
            cout << 0 << " ";
        }
        s.push(make_pair(i + 1, tower_height));
    }
}
