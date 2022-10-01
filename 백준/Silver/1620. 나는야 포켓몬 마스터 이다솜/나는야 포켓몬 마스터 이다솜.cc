#include <iostream>
#include <string>
#include <map>
using namespace std;

map<string, int> m;
int N, M;
string pokemon;
string search;
string pokemonArr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	
	for (int i = 1; i <= N; i++) {
		cin >> pokemon;
		pokemonArr[i] = pokemon;
		m.insert({ pokemon, i });
	}
	for (int i = 0; i < M; i++) {
		cin >> search;
		if (m.find(search) != m.end()) {
			cout << m.find(search)->second << "\n";
		}
		else {
			int num = stoi(search);
			cout << pokemonArr[num] << "\n";
		}
	}
	return 0;
}