#include <iostream>
#define MAX 500 + 1
using namespace std;

int n;
int board[MAX][MAX] = {0};

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++) {
            cin >> board[i][j];
            board[i][j] += max(board[i - 1][j], board[i - 1][j - 1]);
        }

    int mx = 0;
    for (int i = 1; i <= n; i++) mx = max(board[n][i], mx);

    cout << mx << "\n";

    return 0;
}
