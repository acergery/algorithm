/* Baby Gin Game (greedy) - 2020/01/29 */
#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tri = 0, run = 0;
    int num[6], count[10] = { 0 };
    for (int i = 0; i < 6; i++) {
        cin >> num[i];
        count[num[i]]++;
    }

    for (int i = 0; i < 10; i++)
        cout << count[i] << ' ';
    cout << '\n';
  
    for (int i = 0; i < 10; i++) {
        if (count[i] >= 3) {
            count[i] -= 3;
            tri++;
        }
    }

    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 8; i++) {
            if (count[i] != 0 && count[i + 1] != 0 && count[i + 2] != 0) {
                count[i]--;
                count[i + 1]--;
                count[i + 2]--;
                run++;
            }
        }
    }

    cout << tri << ' ' << run << '\n';
    if (tri + run == 2)
        cout << "baby gin\n";
    else
        cout << "lose\n";

    return 0;
}