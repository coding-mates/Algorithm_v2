#include <iostream>
#define MAX 1000 + 1
using namespace std;

int n;
int rgb[MAX][3], d[MAX][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 3; j++) cin >> rgb[i][j];

    d[0][0] = rgb[0][0];
    d[0][1] = rgb[0][1];
    d[0][2] = rgb[0][2];

    for (int i = 1; i < n; i++) {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + rgb[i][0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + rgb[i][1];
        d[i][2] = min(d[i - 1][0], d[i - 1][1]) + rgb[i][2];
    }

    cout << min(d[n - 1][0], min(d[n - 1][1], d[n - 1][2])) << "\n";
    return 0;
}
