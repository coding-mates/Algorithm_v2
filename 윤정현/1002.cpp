#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int x1, y1, x2, y2, r1, r2;
    while (t--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double i = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        if ((x1 == x2) && (y1 == y2))
            (r1 == r2) ? cout << "-1\n" : cout << "0\n";
        else if (abs(r1 - r2) < i && i < (r1 + r2))
            cout << 2 << "\n";
        else if (abs(r1 - r2) == i || i == (r1 + r2))
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }
    return 0;
}
