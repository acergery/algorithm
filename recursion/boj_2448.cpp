// 별 찍기 - 11
#include <bits/stdc++.h>
using namespace std;

// 3071, 6143
char mat[3100][6200];

void func(int n, int x, int y) {
    if (n == 3) {
        mat[x][y] = '*';
        mat[x+1][y-1] = '*';
        mat[x+1][y+1] = '*';
        for (int j = y-2; j <= y+2; j++)
            mat[x+2][j] = '*';
        return;
    }
    func(n/2, x, y);
    func(n/2, x + n/2, y - n/2);
    func(n/2, x + n/2, y + n/2);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
       fill(mat[i], mat[i]+2*n-1, ' ');
    func(n, 0, n-1);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2*n-1; j++)
            cout << mat[i][j];
        cout << '\n';
    }

    return 0;
}