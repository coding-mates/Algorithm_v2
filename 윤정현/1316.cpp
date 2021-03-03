#include <cstring>
#include <iostream>
using namespace std;

int n, cnt = 0;
string s;
bool alpha[26];

int main() {
    cin >> n;
    while (n--) {
        cin >> s;
        memset(alpha, 0, sizeof(alpha));
        alpha[s[0] - 'a'] = true;
        bool flag = true;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) continue;
            if (alpha[s[i] - 'a']) {
                flag = false;
                break;
            }
            alpha[s[i] - 'a'] = true;
        }
        if (flag) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}
