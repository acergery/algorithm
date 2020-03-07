/*
    swea 1217 - Power
    Date: 2020 / 02 / 05
*/
#include <iostream>
using namespace std;
int power(int n, int m) {
    if (m == 1)
        return n;
    else
        return n * power(n, m - 1);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int idx, n, m;
        cin >> idx >> n >> m;
        cout << '#' << idx << ' ' << power(n, m) << '\n';
    }

    return 0;
}