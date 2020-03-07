/* boj 1011 - Fly me to the Alpha Centauri */
#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;

    cin >> tc;
    while (tc--) {
        long x, y, d, n, min;
        long squareN;
        cin >> x >> y;
        d = y - x;
        for (n = 1; ; n++) {
            squareN = n * n;
            if (squareN - n + 1 <= d && d <= squareN) {
                min = 2 * n - 1;
                break;
            }
            else if (squareN + 1 <= d && d <= squareN + n) {
                min = 2 * n;
                break;
            }
        }
        cout << min << '\n';
    }

    return 0;
}