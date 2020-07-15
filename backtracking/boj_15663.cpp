// N과 M (9)
// N과 M (5)에서 중복입력 조건 추가됨
#include <bits/stdc++.h>
using namespace std;

const int MX_N = 8, MX_M = 8;
int n, m;
int arr[MX_M], input[MX_N];
bool isUsed[MX_N];

void func(int k) {
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    bool check[10000+1] = {false, };

    for (int i = 0; i < n; i++) {
        if (!isUsed[i] && !check[input[i]]) {
            arr[k] = input[i];
            isUsed[i] = true;
            check[input[i]] = true;
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