// N-Queen
#include <bits/stdc++.h>
using namespace std;

int n;
int cnt = 0;
bool isUsedRight[40];
bool isUsedRightUp[40];
bool isUsedRightDown[40];

// cur번째 행에 퀸을 배치함
void func(int cur) {
    if (cur == n) {
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) {
        if (isUsedRight[i] || 
            isUsedRightDown[i+cur] ||
            isUsedRightUp[cur-i+n-1])
            continue;
        isUsedRight[i] = true;
        isUsedRightDown[i+cur] = true;
        isUsedRightUp[cur-i+n-1] = true;
        func(cur+1);
        isUsedRight[i] = false;
        isUsedRightDown[i+cur] = false;
        isUsedRightUp[cur-i+n-1] = false;

    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    func(0);
    cout << cnt;
    
    return 0;
}