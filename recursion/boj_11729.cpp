// 하노이 탑 이동 순서
#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int from, int by, int to) {
    if (n == 1) {
        cout << from << ' ' << to << '\n';
    }
    else {
        hanoi(n-1, from, to, by);
        cout << from << ' ' << to << '\n';
        hanoi(n-1, by, from, to);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, cnt;
    cin >> n;
    cnt = (1<<n) - 1;
    cout << cnt << '\n';
    hanoi(n, 1, 2, 3);

    return 0;
}