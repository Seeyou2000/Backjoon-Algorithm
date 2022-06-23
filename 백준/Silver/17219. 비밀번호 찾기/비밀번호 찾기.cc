#include <iostream>
#include <map>
using namespace std;

map<string, string> password;
int N, M;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1, str2;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str1 >> str2;
		password.insert({ str1, str2 });
	}
	for (int i = 0; i < M; i++) {
		cin >> str1;
		cout << password.find(str1)->second << "\n";
	}
	return 0;
}