// 개수 세기
#include <bits/stdc++.h>
using namespace std;

int num[100];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, v, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    cin >> v;
    for (int i = 0; i < n; i++)
        if (v == num[i])
            cnt++;
    cout << cnt << '\n';
    return 0;
}