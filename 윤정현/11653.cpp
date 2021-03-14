#include <iostream>
using namespace std;

int n;
int main() {
    cin >> n;

    int m = 2;
    while (n > 1) {
        if (n % m)
            m++;
        else {
            cout << m << "\n";
            n /= m;
        }
    }
    return 0;
}
