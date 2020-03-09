// 숫자
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long a[2];
    cin >> a[0] >> a[1];
    if (a[0] == a[1]) {
        cout << "0\n";
        return 0;
    }
    sort(a, a+2);
    cout << a[1]-a[0]-1 << '\n';
    for (long long i = a[0] + 1; i < a[1]; i++)
        cout << i << ' ';
    return 0;
}