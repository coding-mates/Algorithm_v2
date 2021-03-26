#include <iostream>
#define MAX 8 + 1
using namespace std;

int n, m;
bool isused[MAX];
int num[MAX];

void print() {
    for (int i = 0; i < m; i++) cout << num[i] << ' ';
    cout << "\n";
    return;
}

void check(int cnt) {
    if (cnt == m) {
        print();
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!isused[i]) {
            num[cnt] = i;
            isused[i] = 1;
            check(cnt + 1);
            isused[i] = 0;
        }
    }
}

int main() {
    cin >> n >> m;
    check(0);
    return 0;
}
