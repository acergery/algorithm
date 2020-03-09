// 핸드폰 요금
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, tmp, Y = 0, M = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> tmp;
        Y += 10 * (int)(tmp/30 + 1);
        M += 15 * (int)(tmp/60 + 1);
    }
    if (Y == M)
        cout << "Y M " << Y;
    else if (Y < M)
        cout << "Y " << Y;   
    else    
        cout << "M " << M;
        
    return 0;
}