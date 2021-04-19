#include <algorithm>
#include <iostream>
#include <vector>
#define MAX 100 + 1
using namespace std;

int main() {
    int n, a, b;
    int d[MAX];
    cin >> n;

    vector<pair<int, int>> board;
    while (n--) {
        cin >> a >> b;
        board.push_back({a, b});
    }

    sort(board.begin(), board.end());
    for (int i = 0; i < board.size(); i++) {
        d[i] = 1;
        for (int j = 0; j < i; j++)
            if (board[j].second < board[i].second) d[i] = max(d[i], d[j] + 1);
    }

    int mx = 0;
    for (int i = 0; i < board.size(); i++) mx = max(mx, d[i]);

    cout << board.size() - mx << "\n";

    return 0;
}
