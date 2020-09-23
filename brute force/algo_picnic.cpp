#include <iostream>
#include <algorithm>

using namespace std;

int tc, n, m, a, b;
bool areFriends[10][10];
bool taken[10];

// taken[i]: i번째 학생이 짝을 이미 찾으면 true
int countPairings(bool taken[10]) {
    // 남은 학생들 중 가장 번호가 빠른 학생
    int firstFree = -1;
    for (int i = 0; i < n; i++) {
        if (!taken[i]) {
            firstFree = i;
            break;
        }
    }
    // 모든 학생이 짝을 찾은 경우이므로 한 가지 방법을 찾은 것임, 함수 종료 (base)
    if (firstFree == -1) return 1;
    int ret = 0;

    for (int pairWith = firstFree+1; pairWith < n; pairWith++) {
        if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
            taken[firstFree] = taken[pairWith] = true;
            ret += countPairings(taken);
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}
int main(void) {
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            areFriends[a][b] = areFriends[b][a] = true;
        }
        cout << countPairings(taken) << '\n';
        fill(taken, taken+n, false);
        for (int i = 0; i < n; i++)
            fill(areFriends[i], areFriends[i]+n, false);
    }
    return 0;
}