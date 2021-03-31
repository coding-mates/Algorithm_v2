#include <iostream>
#define MAX 11 + 1
#define INF 1000000000
using namespace std;

int n, mx = -1 * INF, mn = INF;
int num[MAX], oper[5];

void calculate(int plus, int minus, int multi, int div, int sum, int idx) {
    if (idx == n) {
        mx = max(mx, sum);
        mn = min(mn, sum);
        return;
    }

    if (plus < oper[0])
        calculate(plus + 1, minus, multi, div, sum + num[idx], idx + 1);
    if (minus < oper[1])
        calculate(plus, minus + 1, multi, div, sum - num[idx], idx + 1);
    if (multi < oper[2])
        calculate(plus, minus, multi + 1, div, sum * num[idx], idx + 1);
    if (div < oper[3])
        calculate(plus, minus, multi, div + 1, sum / num[idx], idx + 1);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> num[i];
    for (int i = 0; i < 4; i++) cin >> oper[i];

    calculate(0, 0, 0, 0, num[0], 1);

    cout << mx << "\n" << mn << "\n";
    return 0;
}
