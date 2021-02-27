#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    (a > b) ? cout << a << "\n" : cout << b << "\n";

    return 0;
}
