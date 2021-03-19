#include <iostream>
#define MAX 2200
using namespace std;

char board[MAX][MAX];

void paint(int x, int y, int len) {
    if (len == 1) {
        board[x][y] = '*';
        return;
    }

    int l = len / 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1) continue;
            paint(x + i * l, y + j * l, l);
        }
}

int main() {
    int n;
    cin >> n;

    paint(0, 0, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            (board[i][j] == '*') ? cout << '*' : cout << ' ';
        cout << "\n";
    }

    return 0;
}
