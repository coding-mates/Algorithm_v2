#include <iostream>
using namespace std;

int t, n;
pair<int, int> d[41];

int main() {
    cin >> t;
    d[0] = {1, 0};
    d[1] = {0, 1};

    while (t--) {
        cin >> n;
        for (int i = 2; i <= n; i++)
            d[i] = {d[i - 1].first + d[i - 2].first,
                    d[i - 1].second + d[i - 2].second};
        cout << d[n].first << ' ' << d[n].second << "\n";
    }

    return 0;
}
