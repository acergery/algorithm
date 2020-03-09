// 방 배정
#include <bits/stdc++.h>
using namespace std;

int student[7][2]; //1: boy, 0: girl
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, room = 0;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int s, y;
        cin >> s >> y;
        student[y][s]++;
    }

    for (int i = 1; i < 7; i++) {
        for (int j = 0; j < 2; j++) {
            if (student[i][j] == 0)
                continue;
            else            
                room += (student[i][j] - 1)/k + 1;      
        }
    }
    cout << room;
    return 0;
}