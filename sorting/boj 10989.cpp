#include <iostream>
using namespace std;

int num[10001];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num[tmp]++;
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < num[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}