// 터렛
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tc;
    cin >> tc;
    while (tc--) {
        int x1, x2, y1, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double d = pow(x1-x2, 2) + pow(y1-y2, 2);

        if (d > r1 + r2) {
            cout << '0';
        }
        else if (d == r1 + r2) {
            cout << '1';
        }
        else if (d )
    }
    return 0;
}