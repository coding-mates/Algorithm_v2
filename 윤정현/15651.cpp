#include <iostream>
using namespace std;

int n, m;
int result[8];

void check(int depth) {
    if (depth == m) {
        for (int i = 0; i < m; i++) cout << result[i] << ' ';
        cout << "\n";
        return;
    }

    for (int i = 1; i <= n; i++) {
        result[depth] = i;
        check(depth + 1);
    }
}

int main() {
    cin >> n >> m;

    check(0);

    return 0;
}
