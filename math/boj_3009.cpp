// 네 번째 점 (cetvrta)
#include <bits/stdc++.h>
using namespace std;

int x[1001], y[1001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    for (int i = 0; i < 3; i++) {
        cin >> a >> b;
        x[a]++;
        y[b]++;
    }
    for (int i = 1; i <= 1000; i++) {
        if (x[i] == 1) a = i;
        if (y[i] == 1) b = i;
    }
    cout << a << ' ' << b;

    return 0;
}