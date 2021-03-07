#include <algorithm>
#include <iostream>
using namespace std;

int alpha[26] = {0};

int main() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);

    for (char c : s) alpha[c - 'A']++;

    int mx = 0;
    for (int i = 0; i < 26; i++) mx = max(mx, alpha[i]);

    int cnt = 0;
    char c;
    for (int i = 0; i < 26; i++) {
        if (mx == alpha[i]) {
            cnt++;
            c = i + 'A';
        }
    }

    (cnt == 1) ? cout << c << "\n" : cout << "?\n";

    return 0;
}
