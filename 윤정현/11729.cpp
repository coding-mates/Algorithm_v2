#include <iostream>
#include <vector>
using namespace std;

int n;
vector<pair<int, int>> v;

void hanoi(int n, int from, int by, int to) {
    if (n == 1)
        v.push_back({from, to});
    else {
        hanoi(n - 1, from, to, by);
        v.push_back({from, to});
        hanoi(n - 1, by, from, to);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    hanoi(n, 1, 2, 3);
    cout << v.size() << "\n";
    for (auto nxt : v) {
        cout << nxt.first << ' ' << nxt.second << "\n";
    }
    return 0;
}
