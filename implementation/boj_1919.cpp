// 에너그램 만들기
#include <bits/stdc++.h>
using namespace std;

int alpha[2][26];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    int diff = 0;
    cin >> a >> b;

    for (auto i: a)
        alpha[0][i-'a']++;       

    for (auto i: b) 
        alpha[1][i-'a']++;
    
    for (int i = 0; i < 26; i++)
        diff += abs(alpha[0][i] - alpha[1][i]);
    cout << diff;

    return 0;
}