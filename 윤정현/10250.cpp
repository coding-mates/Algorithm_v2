#include <iostream>
using namespace std;

int t, h, w, n;

int main() {
    cin >> t;
    while (t--) {
        cin >> h >> w >> n;
        (n % h) ? cout << n % h : cout << h;

        int tmp = (n - 1) / h + 1;
        (tmp < 10) ? cout << 0 << tmp << "\n" : cout << tmp << "\n";
    }
    return 0;
}
