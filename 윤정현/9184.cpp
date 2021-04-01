#include <iostream>
#define MAX 20 + 1
using namespace std;

int a, b, c;
int d[MAX][MAX][MAX];

int check(int a, int b, int c) {
    if (a <= 0 or b <= 0 or c <= 0) return 1;
    if (a > 20 or b > 20 or c > 20) return check(20, 20, 20);

    int &result = d[a][b][c];
    if (result != 0) return result;

    if (a < b and b < c)
        result =
            check(a, b, c - 1) + check(a, b - 1, c - 1) - check(a, b - 1, c);
    else
        result = check(a - 1, b, c) + check(a - 1, b - 1, c) +
                 check(a - 1, b, c - 1) - check(a - 1, b - 1, c - 1);

    return result;
}

int main() {
    while (1) {
        cin >> a >> b >> c;
        if (a == -1 && a == b && b == c) break;
        printf("w(%d, %d, %d) = %d\n", a, b, c, check(a, b, c));
    }
    return 0;
}
