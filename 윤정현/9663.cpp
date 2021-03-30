#include <iostream>
#define MAX 15 + 1
using namespace std;

int n, cnt = 0;
int board[MAX];

bool isVaild(int idx) {
    for (int i = 0; i < idx; i++)
        if (board[idx] == board[i] || idx - i == abs(board[idx] - board[i]))
            return 0;
    return 1;
}

void nqueen(int idx) {
    if (idx == n) {
        cnt++;
        return;
    }

    for (int i = 0; i < n; i++) {
        board[idx] = i;
        if (isVaild(idx)) nqueen(idx + 1);
    }
}

int main() {
    cin >> n;
    nqueen(0);
    cout << cnt << "\n";

    return 0;
}
