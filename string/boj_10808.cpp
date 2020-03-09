// 알파벳 개수
#include <bits/stdc++.h>
using namespace std;

int alpha[26];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin, s);

    for (auto c: s)
        alpha[c-'a']++;

    for (int i = 0; i < 26; i++) 
        cout << alpha[i] << ' ';
    
    return 0;
}