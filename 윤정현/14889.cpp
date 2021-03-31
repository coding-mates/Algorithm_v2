#include <iostream>
#include <vector>
#define MAX 20 + 1
#define INF 987654321
using namespace std;

int n;
int board[MAX][MAX];
bool check[MAX] = {0};
int mn = INF;

void go(int idx, int cnt) {
    if (cnt == n / 2) {
        vector<int> v1, v2;
        for (int i = 1; i <= n; i++)
            (check[i]) ? v1.push_back(i) : v2.push_back(i);

        int start = 0, link = 0;
        for (int i = 0; i < n / 2; i++)
            for (int j = 0; j < n / 2; j++) {
                start += board[v1[i]][v1[j]];
                link += board[v2[i]][v2[j]];
            }

        if (mn > abs(start - link)) mn = abs(start - link);
        return;
    }

    for (int i = idx; i <= n; i++)
        if (!check[i]) {
            check[i] = 1;
            go(i + 1, cnt + 1);
            check[i] = 0;
        }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) cin >> board[i][j];

    go(1, 0);
    cout << mn << "\n";

    return 0;
}
