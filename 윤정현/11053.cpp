#include <algorithm>
#include <iostream>
#define MAX 1000 + 1
using namespace std;

int n;
int board[MAX], d[MAX];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> board[i];

    for (int i = 0; i < n; i++) {
        d[i] = 1;
        for (int j = 0; j < i; j++)
            if (board[j] < board[i]) d[i] = max(d[i], d[j] + 1);
    }

    cout << *max_element(d, d + n) << "\n";

    return 0;
}
