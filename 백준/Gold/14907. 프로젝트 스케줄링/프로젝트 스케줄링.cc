#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

int inDegree[26];
int T[26];
int dp[26];
vector<int> v[26];

void topologySort() {
    queue<int> q;
    for (int i = 0; i < 26; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
            dp[i] = T[i];
        }
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        for (int i = 0; i < v[x].size(); i++) {
            int next = v[x][i];
            dp[next] = max(dp[next], dp[x] + T[next]);
            inDegree[next]--;
            if (inDegree[next] == 0)
                q.push(next);
        }
    }
}

void Min_time() {
    int max = 0;
    for (int i = 0; i < 26; i++) {
        if (dp[i] >= max)
            max = dp[i];
    }
    cout << max << "\n";
}

int main() {
    string str;
    while (true) {
        getline(cin, str);
        if (cin.eof())break;
        string a = "";
        vector<string> sv;
        for (int i = 0; i < str.size(); i++) {
            if (str.at(i) != ' ')
                a.push_back(str.at(i));
            else {
                sv.push_back(a);
                a = "";
            }
        }
        sv.push_back(a);

        string work = sv[0];
        int time = stoi(sv[1]);
        string works;
        if (sv.size() == 2) works = "";
        else works = sv[2];
        
        for (int i = 0; i < works.size(); i++) {
            v[works.at(i) - 'A'].push_back(work.at(0) - 'A');
        }
        inDegree[work.at(0) - 'A'] = works.size();
        T[work.at(0) - 'A'] = time;
    }

    topologySort();
    Min_time();
    return 0;
}