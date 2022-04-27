#include <iostream>
using namespace std;

void hanoi(int first, int second, int third, int n) {
    if (n == 1) {
        cout << first << ' ' << third << '\n';
        return;
    }
    hanoi(first, third, second, n - 1);
    cout << first << ' ' << third << '\n';
    hanoi(second, first, third, n - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numberOfDisk; 
    int sum = 1;
    cin >> numberOfDisk;
    for (int i = 0; i < numberOfDisk; i++) {
        sum *= 2;
    }
    cout << sum - 1 << '\n';
    hanoi(1, 2, 3, numberOfDisk);
}