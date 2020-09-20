/* 
    swea 1204 - the most frequent number
    Date: 2020 / 01 / 29
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc, idx;
    cin >> tc;
    while (tc--) {
        int count[101] = { 0 };
        int score, max, max_idx;

        cin >> idx;
        for (int i = 0; i < 1000; i++) {
            cin >> score;
            count[score]++;
        }

        max = count[0];
        max_idx = 0;
        for (int i = 1; i < 101; i++) {
            if (max <= count[i]) {
                max = count[i];
                max_idx = i;
            }
        }
        cout << "#" << idx << ' ' << max_idx << '\n';
    }    

    return 0;
}