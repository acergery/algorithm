// 별 찍기 - 10
#include <bits/stdc++.h>
using namespace std;

char mat[2200][2200];

void func(int n, int x, int y) {
    if (n == 1) {
        mat[x][y] = '*';
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 1 && j == 1)
                continue;
            func(n/3, x + n/3*i, y + n/3*j);
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        fill(mat[i], mat[i] + n, ' ');
    func(n, 0, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n ;j++)
            cout << mat[i][j];
        cout << '\n';
    }
    return 0;
}