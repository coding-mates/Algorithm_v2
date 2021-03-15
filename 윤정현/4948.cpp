#include <cmath>
#include <iostream>
#define MAX 300000
using namespace std;

int n;
bool isntSosu[MAX];

void sosu() {
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (isntSosu[i]) continue;
        for (int j = i * 2; j < MAX; j += i) isntSosu[j] = 1;
    }
    return;
}

int main() {
    sosu();
    int cnt;

    while (1) {
        cin >> n;
        if (n == 0) break;
        cnt = 0;
        for (int i = n + 1; i <= 2 * n; i++)
            if (!isntSosu[i]) cnt++;

        cout << cnt << "\n";
    }

    return 0;
}
