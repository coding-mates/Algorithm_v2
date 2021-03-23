#include <iostream>
#include <vector>
#define INF 300000
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> card(n);
    for (int i = 0; i < n; i++) cin >> card[i];

    int ans = INF;
    int diff = INF;
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++) {
                if (i == j || j == k || k == i) continue;
                sum = card[i] + card[j] + card[k];
                if (sum <= m && diff > m - sum) {
                    diff = m - sum;
                    ans = sum;
                }
            }

    cout << ans << "\n";

    return 0;
}
