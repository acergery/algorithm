// N과 M (12)
// N과 M (11)에서 비내림차순 조건 추가됨
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
    bool check[10000+1] = {false, };

    for (int i = start; i < n; i++) {
        // k번째에서 input[i]가 사용되지 않은 경우
        // 즉, 새로운 수인 경우
        if (!check[input[i]]) {
            arr[k] = input[i];
            check[input[i]] = true;
            func(k+1, i);
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
    func(0, 0);

    return 0;
}