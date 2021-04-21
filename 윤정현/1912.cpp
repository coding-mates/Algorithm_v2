#include <iostream>
#define MAX 100000 + 1
using namespace std;

int n, mx = -1000;
int board[MAX], d[MAX];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) cin >> board[i];
    for (int i = 0; i < n; i++) {
        d[i] = (d[i - 1] < 0) ? board[i] : d[i - 1] + board[i];
        if (mx < d[i]) mx = d[i];
    }

    cout << mx << "\n";
    return 0;
}
