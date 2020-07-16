// 암호 만들기
// 최소 한 개의 모음(a, e, i, o, u)과 최소 두 개의 자음
#include <bits/stdc++.h>
using namespace std;

int l, c;
char input[15], arr[15];
int aeiou_cnt = 0;

void func(int cur, int start) {
    if (cur == l) {
        aeiou_cnt = 0;
        for (int i = 0; i < l; i++) {            
            if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
                aeiou_cnt++;    
        }
        if (aeiou_cnt < 1 || l-aeiou_cnt < 2)
            return;      
        for (int i = 0; i < l; i++)
            cout << arr[i];
        cout << '\n';
        return;
    }

    for (int i = start; i < c; i++) {
        arr[cur] = input[i];
        func(cur+1, i+1);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> l >> c;
    for (int i = 0; i < c; i++)
        cin >> input[i];
    sort(input, input+c);
    func(0, 0);

    return 0;
}