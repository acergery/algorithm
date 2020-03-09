// 홀수
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int sum = 0, tmp, min = 100;
    for (int i = 0; i < 7; i++) {
        cin >> tmp;
        if (tmp % 2 == 1) {
            sum += tmp;
            min = (min < tmp) ? min : tmp;
        }
    }
    if (sum == 0)
        cout << "-1";
    else
        cout << sum << '\n' << min;
    return 0;
}