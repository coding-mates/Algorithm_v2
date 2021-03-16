#include <iostream>
using namespace std;

int main() {
    int x, y, w, h;
    cin >> x >> y >> w >> h;
    cout << min(x, min(y, min(abs(x - w), abs(y - h)))) << "\n";
    return 0;
}
