#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, rank, weight, height;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> weight >> height;
        v.push_back(pair<int, int>(weight, height));
    }
    for (int i = 0; i < n; i++) {
        rank = 0;
        for (int j = 0; j < n; j++) {
            if (v[i].first < v[j].first && v[i].second < v[j].second)
                rank++;
        }
        cout << rank + 1 << " ";
    }
    return 0;
}
