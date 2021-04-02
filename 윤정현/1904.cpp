#include <iostream>
#define MAX 1000000 + 1
#define MOD 15746
using namespace std;

int n;
int d[MAX];

int main() {
    cin >> n;
    d[0] = 0;
    d[1] = 1;
    d[2] = 2;
    for (int i = 3; i <= n; i++) d[i] = (d[i - 1] + d[i - 2]) % MOD;

    cout << d[n] << "\n";
    return 0;
}
