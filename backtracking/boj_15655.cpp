// N과 M (6)
// N과 M (5)에서 오름차순 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 8, MX_M = 8;
int n, m;
int arr[MX_M], input[MX_N];

void func(int k, int start) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i < n; i++) {
        arr[k] = input[i];
        func(k+1, i+1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    sort(input, input+n);
    func(0, 0);

    return 0;
}