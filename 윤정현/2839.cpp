#include <iostream>
#define MAX 1234
using namespace std;

int n, ans = MAX, sum, mod;

int main() {
    cin >> n;

    for (int i = 0; i * 5 <= n; i++) {
        sum = i;
        mod = (n - i * 5) % 3;
        sum += (n - i * 5) / 3;
        if (mod == 0) ans = min(ans, sum);
    }

    (ans == MAX) ? cout << "-1\n" : cout << ans << "\n";

    return 0;
}
