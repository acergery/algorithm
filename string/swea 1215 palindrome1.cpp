/* 
    swea 1215 - Palindrome 1
    Date: 2020 / 01 / 30
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int lenp, cnt = 0;
        char arr[8][8];
        bool is_pal = true;

        cin >> lenp;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j <= 8 - lenp; j++) {
                is_pal = true;
                for (int k = 0; k <= lenp / 2; k++) {
                    if (arr[i][j + k] != arr[i][j + lenp - 1 - k]) {
                        is_pal = false;
                        break;
                    }
                }
                if (is_pal)
                    cnt++;
            }
        }

        for (int i = 0; i < 8; i++) {
            for (int j = 0; j <= 8 - lenp; j++) {
                is_pal = true;
                for (int k = 0; k <= lenp / 2; k++) {
                    if (arr[j + k][i] != arr[j + lenp - 1 - k][i]) {
                        is_pal = false;
                        break;
                    }
                }
                if (is_pal)
                    cnt++;
            }
        }


        cout <<'#' << 10 - tc << ' ' << cnt <<  "\n";
    }

    return 0;
}