#include <iostream>
using namespace std;

int main() {
    int a, b, c, cnt;
    cin >> a >> b >> c;

    if (b >= c)
        cout << "-1\n";
    else {
        cnt = a / (c - b) + 1;
        cout << cnt << "\n";
    }

    return 0;
}
