// N과 M (3)
// N과 M (1)에서 중복 허용 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 7, MX_M = 7;
int n, m;
int arr[MX_M];

void func(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        arr[k] = i;
        func(k+1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0);

    return 0;
}