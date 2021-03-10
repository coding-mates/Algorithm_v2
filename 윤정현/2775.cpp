#include <iostream>
#define MAX 14 + 1
using namespace std;

int t, k, n, d[MAX][MAX] = {0};

int main() {
    for (int i = 1; i < MAX; i++) d[0][i] = i;

    for (int i = 1; i < MAX; i++)
        for (int j = 1; j < MAX; j++) d[i][j] = d[i - 1][j] + d[i][j - 1];

    cin >> t;
    while (t--) {
        cin >> k >> n;
        cout << d[k][n] << "\n";
    }
    return 0;
}
