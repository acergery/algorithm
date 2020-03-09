#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int tc = 10;
    int v[21];
    for (int i = 1; i < 21; i++)
        v[i] = i;
    while (tc--) {
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= (a+b)/2; i++) {
            int tmp;
            tmp = v[i];
            v[i] = v[a+b-i];
            v[a+b-i] = tmp;
        }
    }
    for (int i = 1; i < 21; i++)
        cout << v[i] << ' ';
    return 0;
}