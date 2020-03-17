// 선 그리기
#include <bits/stdc++.h>
using namespace std;

const int MX = 10000;
int arr[MX+5];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        fill(arr + a, arr + b, 1);
    }

    for (int i = 1; i <= MX; i++) {
        if (arr[i] == 1)
            cnt++;
    }
    cout << cnt;

    return 0;
}