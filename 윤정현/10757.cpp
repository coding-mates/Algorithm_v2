#include <algorithm>
#include <iostream>
using namespace std;

int a_len, b_len;
string a, b, ans = "";
int main() {
    cin >> a >> b;
    a_len = a.length();
    b_len = b.length();
    if (a_len < b_len)
        for (int i = 0; i < b_len - a_len; i++) a = '0' + a;
    else
        for (int i = 0; i < a_len - b_len; i++) b = '0' + b;

    int carry = 0, n;
    for (int i = a.length() - 1; i >= 0; i--) {
        n = (a[i] - '0') + (b[i] - '0') + carry;
        carry = n / 10;
        ans = char('0' + n % 10) + ans;
    }
    if (carry) ans = char('0' + carry) + ans;

    std::cout << ans << "\n";

    return 0;
}
