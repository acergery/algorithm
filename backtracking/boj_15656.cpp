// N과 M (7)
// N과 M (5)에서 중복허용 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 7, MX_M = 7;
int n, m;
int arr[MX_M], input[MX_N];

void func(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[k] = input[i];
        func(k+1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, input+n);
    func(0);

    return 0;
}