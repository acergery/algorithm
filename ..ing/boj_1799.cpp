// 비숍
#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0, mx_cnt = 0;
int board[10][10];
bool rightDown[19];
bool rightUp[19];

// cur: 45도 회전한 거에서 이번에 채워야 할 줄
void func(int cur) {
    if (cur == 2*n-1) {
        mx_cnt = max(mx_cnt, cnt);
        cnt = 0;
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == 0 || rightUp[cur + 2*j - n + 1] || 
                (i-j+n-1) < 0 || (i-j+n-1) >= 2*n)
                continue;
            rightUp[cur + 2*j - n + 1] = true;
            cnt++;
            func(cur+1);
            rightUp[cur + 2*j - n + 1] = false;
        }
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    func(0);
    cout << mx_cnt << '\n';

    return 0;
}