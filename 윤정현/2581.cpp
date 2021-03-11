#include <cmath>
#include <iostream>
#define MAX 10000 + 1
using namespace std;

int m, n, sum = 0, mn = 0;
bool sosu[MAX];

void checkSosu() {
    sosu[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (sosu[i]) continue;
        for (int j = 2 * i; j < MAX; j += i) sosu[j] = 1;
    }
}

int main() {
    checkSosu();
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        if (!sosu[i]) {
            if (!mn) mn = i;
            sum += i;
        }
    }

    (mn) ? cout << sum << "\n" << mn << "\n" : cout << "-1";

    return 0;
}
