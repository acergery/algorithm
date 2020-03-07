/* 
    swea 1209 - Sum
    Date: 2020 / 01 / 29
*/

#include <iostream>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int idx, max = 0;
        int arr[100][100];
        int row_sum[100] = { 0 }, col_sum[100] = { 0 }, diag_sum[2] = { 0 };

        cin >> idx;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                cin >> arr[i][j];
            }
        }
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                row_sum[i] += arr[i][j];
                col_sum[j] += arr[i][j];
            }
        }

        for (int i = 0; i < 100; i++) {
            diag_sum[0] += arr[i][i];
            diag_sum[1] += arr[i][99 - i];
        }         

        for (int i = 0; i < 100; i++) {
            if (max < row_sum[i])
                max = row_sum[i];
            if (max < col_sum[i])
                max = col_sum[i];
            if (i < 2 && (max < diag_sum[i]))
                max = diag_sum[i];
        }
        cout <<'#' << idx << ' ' << max << "\n";
    }

    return 0;
}