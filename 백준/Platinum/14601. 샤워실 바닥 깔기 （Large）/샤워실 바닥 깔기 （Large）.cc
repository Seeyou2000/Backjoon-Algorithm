#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int board[257][257];
int tileNo = 0;

void fillCornersExcept(int midRow, int midCol, int flag) {

    tileNo++;
    if (flag != 1)
        board[midRow - 1][midCol - 1] = tileNo;
    if (flag != 2)
        board[midRow - 1][midCol] = tileNo;
    if (flag != 3)
        board[midRow][midCol - 1] = tileNo;
    if (flag != 4)
        board[midRow][midCol] = tileNo;

    return;
}


void tronimo(int startRow, int startCol, int size, pair<int, int> hole) {


    if (size == 1) return;

    int midRow = startRow + size / 2;
    int midCol = startCol + size / 2;

    pair <int, int> hole1 = make_pair(midRow - 1, midCol - 1);
    pair <int, int> hole2 = make_pair(midRow - 1, midCol);
    pair <int, int> hole3 = make_pair(midRow, midCol - 1);
    pair <int, int> hole4 = make_pair(midRow, midCol);

    if (hole.first < midRow && hole.second < midCol) {
        fillCornersExcept(midRow, midCol, 1);

        hole1.first = hole.first;
        hole1.second = hole.second;
    }
    if (hole.first < midRow && hole.second >= midCol) {            //1 
        fillCornersExcept(midRow, midCol, 2);

        hole2.first = hole.first;
        hole2.second = hole.second;
    }
    if (hole.first >= midRow && hole.second < midCol) {
        fillCornersExcept(midRow, midCol, 3);

        hole3.first = hole.first;
        hole3.second = hole.second;
    }
    if (hole.first >= midRow && hole.second >= midCol) {
        fillCornersExcept(midRow, midCol, 4);

        hole4.first = hole.first;
        hole4.second = hole.second;
    }

    tronimo(startRow, startCol, size / 2, hole1);
    tronimo(startRow, midCol, size / 2, hole2);
    tronimo(midRow, startCol, size / 2, hole3);
    tronimo(midRow, midCol, size / 2, hole4);

    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, x, y;
    cin >> k >> x >> y;

    int size = pow(2, k);

    board[size - y + 1][x] = -1;
    tronimo(1, 1, size, make_pair(size - y + 1, x));

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}