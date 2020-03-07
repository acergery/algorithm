/* 
    swea 1211 - Ladder 2
    Date: 2020 / 01 / 30
*/

#include <iostream>
using namespace std;

int solve(int arr[][100], int goal_x[100], int k) {
    int len, cur_x, cur_y, move_dir;
    int min = 10000, min_x = -1;

    for (int i = 0; i < k; i++) {
        cur_x = goal_x[i];
        cur_y = 99;
        len = 0;
        move_dir = -1;
        while (cur_y != 0) {
            if (cur_x - 1 >= 0 && move_dir != 2 && arr[cur_y][cur_x - 1] == 1) {
                cur_x -= 1;
                move_dir = 1;
            }
            else if (cur_x + 1 < 100 && move_dir != 1 && arr[cur_y][cur_x + 1] == 1) {
                cur_x += 1;
                move_dir = 2;
            }
            else if (arr[cur_y - 1][cur_x] == 1) {
                cur_y -= 1;
                move_dir = 3;
            }
            len++;
        }
        if (min > len) {
            min = len;
            min_x = cur_x;
        }
    }
    return min_x;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int idx, arr[100][100], goal_x[100];
        int k = 0;
        cin >> idx;
        for (int i = 0; i < 100; i++) {
            for (int j = 0; j < 100; j++) {
                cin >> arr[i][j];
                if (arr[i][j] == 1 && i == 99) {
                    goal_x[k++] = j;
                }
            }
        }
 
        cout <<'#' << idx << ' ' << solve(arr, goal_x, k) << "\n";
    }

    return 0;
}