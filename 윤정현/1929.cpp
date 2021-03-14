#include <cmath>
#include <iostream>
#define MAX 1000000 + 1
using namespace std;

int n, m;
bool isntSosu[MAX] = {1, 1};

void sosu() {
    for (int i = 2; i <= sqrt(MAX); i++) {
        if (isntSosu[i]) continue;
        for (int j = i * 2; j < MAX; j += i) isntSosu[j] = 1;
    }
}

int main() {
    cin >> m >> n;
    sosu();

    for (m; m <= n; m++)
        if (!isntSosu[m]) cout << m << "\n";

    return 0;
}
