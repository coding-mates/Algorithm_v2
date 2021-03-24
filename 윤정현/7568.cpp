#include <iostream>
#include <vector>
#define X first
#define Y second
using namespace std;

int main() {
    int n, x, y;
    cin >> n;

    vector<pair<int, int>> weight(n);
    vector<int> rank(n, n);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        weight[i] = {x, y};
    }

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++) {
            if ((weight[i].X > weight[j].X) && (weight[i].Y > weight[j].Y)) {
                rank[i]--;
            } else if ((weight[i].X < weight[j].X) &&
                       (weight[i].Y < weight[j].Y)) {
                rank[j]--;
            } else {
                rank[i]--;
                rank[j]--;
            }
        }

    for (auto r : rank) cout << r << ' ';
    cout << "\n";

    return 0;
}
