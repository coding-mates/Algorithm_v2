#include <iostream>
#define MAX 8 + 1
using namespace std;

int n, m;
bool isused[MAX];

void print() {
    for (int i = 1; i <= n; i++)
        if (isused[i]) cout << i << ' ';
    cout << "\n";
    return;
}

void check(int idx, int cnt) {
    if (cnt == m) {
        print();
        return;
    }

    for (int i = idx; i <= n; i++) {
        if (!isused[i]) {
            isused[i] = 1;
            check(i + 1, cnt + 1);
            isused[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    check(1, 0);
    return 0;
}
