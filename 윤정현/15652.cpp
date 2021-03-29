#include <iostream>
using namespace std;

int n, m;
int result[9];

void check(int depth, int idx) {
    if (depth == m) {
        for (int i = 0; i < m; i++) cout << result[i] << ' ';
        cout << "\n";
        return;
    }

    for (int i = idx; i <= n; i++) {
        result[depth] = i;
        check(depth + 1, i);
    }
}

int main() {
    cin >> n >> m;

    check(0, 1);

    return 0;
}
