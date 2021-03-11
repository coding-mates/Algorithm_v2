#include <cmath>
#include <iostream>
#define MAX 1000 + 1
using namespace std;

int n, tmp, cnt = 0;
bool sosu[MAX];

void checkSosu() {
    sosu[1] = 1;
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (sosu[i]) continue;
        for (int j = 2 * i; j < MAX; j += i) sosu[j] = 1;
    }
}

int main() {
    cin >> n;
    checkSosu();
    while (n--) {
        cin >> tmp;
        if (!sosu[tmp]) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
