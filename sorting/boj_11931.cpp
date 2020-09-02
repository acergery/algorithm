// 수 정렬하기 4
#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 1000000 + 5;
int n;
int arr[MX];

bool cmp(int a, int b) {
    return a > b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++)
        cout << arr[i] << '\n';

    return 0;
}