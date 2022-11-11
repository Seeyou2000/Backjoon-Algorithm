#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int N;
    int M;
    int temp;
    int numcount = 0;

    deque <int> d;
    deque <int> ans;
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        d.push_back(i + 1);
    }
    for (int j = 0; j < M; j++) {
        cin >> temp;
        ans.push_back(temp);
    }

    for (int i = 0; i < M; i++) {
        auto result = find(d.begin(), d.end(), ans[i]);
        if (d.front() == ans[i]) {
            d.pop_front();
            continue;
        }
        if (result - d.begin() > d.size() / 2)
        {
            while (d.front() != ans[i])
            {
                d.push_front(d.back());
                d.pop_back();
                numcount++;
            }
            d.pop_front();
        }
        else
        {
            while (d.front() != ans[i])
            {
                d.push_back(d.front());
                d.pop_front();
                numcount++;
            }
            d.pop_front();
        }
    }
    cout << numcount;
    return 0;
}