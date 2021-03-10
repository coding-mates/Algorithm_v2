#include <cmath>
#include <iostream>
using namespace std;

int t;
long long x, y, gap;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    while (t--) {
        cin >> x >> y;
        gap = y - x;
        long long i = 1;
        while (i++)
            if (i * i > gap) break;

        if (pow(i - 1, 2) == gap)
            cout << 2 * i - 3 << "\n";
        else if ((pow(i, 2) + pow(i - 1, 2)) / 2 >= gap)
            cout << 2 * (i - 1) << "\n";
        else
            cout << 2 * (i - 1) + 1 << "\n";
    }
    return 0;
}
