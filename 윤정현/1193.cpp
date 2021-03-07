#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int i;
    for (i = 1; x > 0; i++) x -= i;
    (i % 2 == 1) ? cout << i + x - 1 << '/' << 1 - x << "\n"
                 : cout << 1 - x << '/' << i + x - 1 << "\n";
    return 0;
}
