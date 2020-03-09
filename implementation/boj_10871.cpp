#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    int *arr;

    cin >> n >> x;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] < x)
            cout << arr[i] << ' ';
    }
    cout << '\n';

    return 0;
}