/* 
    swea 1213 - String
    Date: 2020 / 01 / 30
*/

#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 10;
    while (tc--) {
        int idx, find_idx, lens, lenp, cnt = 0;
        string pat, str;

        cin >> idx;
        cin >> pat;
        cin >> str;    
        
        lens = str.length();
        lenp = pat.length();
        while (1) {
            find_idx = str.find(pat);
            if (find_idx < 0 || find_idx >= lens)
                break;
            else {
                str = str.substr(find_idx + lenp);
                lens -= lenp;
                cnt++;
            }
        }
        cout <<'#' << idx << ' ' << cnt << "\n";
    }

    return 0;
}