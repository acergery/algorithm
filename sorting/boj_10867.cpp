// 중복 빼고 정렬하기
#include <iostream>

using namespace std;

int num[2001]; // -1000: 0, 0:1000, 1000:2000

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        num[tmp+1000]++;
    }
    for (int i = 0; i < 2001; i++) {
        if (num[i] != 0) {
            cout << i-1000 << ' ';
        }
    }

    return 0;
}