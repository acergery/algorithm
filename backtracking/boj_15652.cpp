// N과 M (4)
// N과 M (3)에서 비내림차순 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 8, MX_M = 8;
int n, m;
int arr[MX_M];

void func(int k, int start) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i <= n; i++) {
        arr[k] = i;
        func(k+1, i);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0, 1);

    return 0;
}