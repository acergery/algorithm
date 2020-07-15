// N과 M (5)
// N과 M (1)에서 N의 범위가 달라짐
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 8, MX_M = 8;
int n, m;
int arr[MX_M];
bool isUsed[MX_N+1];
int input[MX_N+1];

void func(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!isUsed[i]) {
            arr[k] = input[i];
            isUsed[i] = true;
            func(k+1);
            isUsed[i] = false;
        }
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