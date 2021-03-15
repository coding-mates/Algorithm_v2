#include <cmath>
#include <iostream>
#define MAX 10000 + 1
using namespace std;

int n, t;
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

    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = n / 2; i > 0; i--) {
            if (!isntSosu[i] && !isntSosu[n - i]) {
                cout << i << ' ' << n - i << "\n";
                break;
            }
        }
    }

    return 0;
}
