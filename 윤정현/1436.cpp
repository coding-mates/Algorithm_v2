#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string s;
    cin >> n;

    for (int x = 665;; x++) {
        s = to_string(x);
        if (s.find("666") != -1) {
            cnt++;
            if (cnt == n) {
                cout << s << "\n";
                return 0;
            }
        }
    }
    return 0;
}
