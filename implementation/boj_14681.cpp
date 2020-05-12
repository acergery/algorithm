// Quadrant Selection (사분면 고르기)
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "1\n";
    }
    else if (x < 0 && y > 0) {
        cout << "2\n";
    }
    else if (x < 0 && y < 0) {
        cout << "3\n";
    }
    else if (x > 0 && y < 0) {
        cout << "4\n";
    }

    return 0;
}