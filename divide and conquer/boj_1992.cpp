// 쿼드트리
#include <bits/stdc++.h>
using namespace std;

int input[64][64];

void func(int x, int y, int n) {
    int cur = input[x][y];

    bool flag = true;
    for (int i = x; (i < x + n) && flag; i++) {
        for (int j = y; (j < y + n) && flag; j++) {
            if (cur != input[i][j]) {
                flag = false;
            }
        }
    }

    if (flag) {
        printf("%d", cur);
        return;
    }

    printf("(");
    func(x, y, n/2);
    func(x, y + n/2, n/2); 
    func(x + n/2, y, n/2);
    func(x + n/2, y + n/2, n/2);
    printf(")");   
}

int main(void) {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%1d", &input[i][j]);
    func(0, 0, n);

    return 0;
}