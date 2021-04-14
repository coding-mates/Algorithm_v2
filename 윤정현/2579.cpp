#include <iostream>
#define MAX 10000 + 1
using namespace std;

int n, board[MAX], d[MAX][2];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> board[i];

    d[0][0] = board[0];
    d[0][1] = 0;
    d[1][0] = board[1];
    d[1][1] = board[0] + board[1];

    for (int i = 2; i < n; i++) {
        d[i][0] = max(d[i - 2][0], d[i - 2][1]) + board[i];
        d[i][1] = d[i - 1][0] + board[i];
    }

    cout << max(d[n - 1][0], d[n - 1][1]) << "\n";

    return 0;
}
