#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    char tmp;

    cin >> n;
    while (n--) {
        cin >> tmp;
        sum += tmp - '0';
    }

    cout << sum << "\n";
    return 0;
}
