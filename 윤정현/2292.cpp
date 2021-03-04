#include <iostream>
using namespace std;

int main() {
    int n, ans = 1, tmp = 1;
    cin >> n;
    while (1) {
        if (n <= tmp) break;
        tmp += 6 * (ans++);
    }

    cout << ans << "\n";

    return 0;
}
