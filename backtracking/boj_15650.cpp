// N과 M (2)
// N과 M (1)에서 오름차순 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8];

void func(int k, int start) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i <= n; i++) {
        arr[k] = i;
        func(k+1, i+1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0, 1);

    return 0;
}