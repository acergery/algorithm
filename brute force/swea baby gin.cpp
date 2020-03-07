/* Baby Gin Game (brute-force) - 2020/01/29 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string state = "";
    int num[6];
    for (int i = 0; i < 6; i++)
        cin >> num[i];

    sort(num, num + 6);
    do {
        state = "00";
    
        if (num[0] == num[1] && num[1] == num[2])
            state[0] = 't';
        if ((num[1] - num[0] == 1) && (num[2] - num[1] == 1))
            state[0] = 'r';
        if (num[3] == num[4] && num[4] == num[5])
            state[1] = 't';
        if ((num[4] - num[3] == 1) && (num[5] - num[4] == 1))
            state[1] = 'r';

        if (state[0] == '0' || state[1] == '0') {
            continue;
        }
        else {
            for (int i = 0; i < 6; i++)
                cout << num[i] << ' ';
            cout << "\nbaby gin " << state << "\n";
            break;
        }
    } while (next_permutation(num, num + 6));

    if (state == "00")
        cout << "lose\n";
    
    return 0;
}