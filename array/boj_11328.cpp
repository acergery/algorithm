// Strfry
#include <bits/stdc++.h>

using namespace std;

int alpha[2][26];
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while(tc--) {
        string a, b;
        bool isPossible = true;
        cin >> a >> b;
        for (int i = 0; i < 2; i++)
            fill(alpha[i], alpha[i]+26, 0);
 
        for (auto i: a)
            alpha[0][i-'a']++;       

        for (auto i: b) 
            alpha[1][i-'a']++;

        for (int i = 0; i < 26; i++) {
            if (alpha[0][i] != alpha[1][i]) {
                isPossible = false;
                break;
            }
        }
        if (isPossible)
            cout << "Possible\n";
        else        
            cout << "Impossible\n"; 
    }

    return 0;
}