// Lotto (로또)
#include <bits/stdc++.h>
using namespace std;

int k, input[13], arr[6];

void func(int cur, int start) {
    if (cur == 6) {
        for (int i = 0; i < 6; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    for (int i = start; i < k; i++) {
        arr[cur] = input[i];
        func(cur+1, i+1);
    }

}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        fill(input, input+13, 0);
        cin >> k;
        if (k == 0) break;
        for (int i = 0; i < k; i++)
            cin >> input[i];
        func(0, 0);
        cout << '\n';
    }

    return 0;
}