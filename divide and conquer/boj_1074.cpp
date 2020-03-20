// Z
#include <bits/stdc++.h>
using namespace std;

int n, r, c;

void func(int n, int x, int y, int cnt) {
    if (x == r && y == c) {
        cout << cnt;
        return;
    }

    if (r < x || r >= x+pow(2, n) || c < y || c >= y+pow(2, n))
        return;
    
    int nx = x + pow(2, n-1);
    int ny = y + pow(2, n-1);
    int ns = pow(2, 2*(n-1));
    func(n-1, x, y, cnt);
    func(n-1, x, ny, cnt+ns);
    func(n-1, nx, y, cnt+ns*2);
    func(n-1, nx, ny, cnt+ns*3);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> r >> c;
    func(n, 0, 0, 0);

    return 0;
}