#include <iostream>
using namespace std;

int main() {
    string word;
    int sum = 0;
    cin >> word;

    for (char c : word) {
        if (c == 'S' || c == 'V' || c == 'Y' || c == 'Z')
            sum += (c - 'A') / 3 + 2;
        else
            sum += (c - 'A') / 3 + 3;
    }

    cout << sum << "\n";

    return 0;
}
