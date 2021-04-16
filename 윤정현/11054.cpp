#include <iostream>
#define MAX 1000 + 1
using namespace std;

int n, board[MAX], d_d[MAX], d_u[MAX];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> board[i];

    for (int i = 0; i < n; i++) {
        d_u[i] = 1;
        for (int j = 0; j < i; j++)
            if (board[j] < board[i]) d_u[i] = max(d_u[i], d_u[j] + 1);
    }

    for (int i = n - 1; i >= 0; i--) {
        d_d[i] = 1;
        for (int j = n - 1; j > i; j--)
            if (board[i] > board[j]) d_d[i] = max(d_d[i], d_d[j] + 1);
    }

    int mx = 0;
    for (int i = 0; i < n; i++)
        if (mx < d_u[i] + d_d[i]) mx = d_u[i] + d_d[i];

    cout << mx - 1 << "\n";

    return 0;
}
