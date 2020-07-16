// 부분수열의 합
#include <bits/stdc++.h>
using namespace std;

int n, s, input[20];
int cnt = 0;

// cur번째 원소(input[cur])에 대해서 넣을지 말지 판단
void func(int cur, int sum) {
    if (cur == n) {
        if (sum == s)
            cnt++;
        return;
    }

    func(cur+1, sum);
    func(cur+1, sum+input[cur]);
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> input[i];
    func(0, 0);
    // 0일 경우 공집합 빼주기
    if (s == 0)
        cnt--;
    cout << cnt;
    
    return 0;
}