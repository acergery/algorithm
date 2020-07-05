// 별 찍기 - 21
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "* ";
            if (j == (n-1)/2) 
                cout << "\n ";
        }
        cout << "\n";
    }

    return 0;
}