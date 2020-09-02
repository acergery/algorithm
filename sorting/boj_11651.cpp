// 좌표 정렬하기 2
#include <iostream>
#include <algorithm>

using namespace std;

const int MX = 100000 + 5;
pair<int, int> point[MX];

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second < b.second) {
        return true;
    }
    else if (a.second > b.second) {
        return false;
    }
    else {
        return (a.first < b.first) ? true: false;
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> point[i].first >> point[i].second;

    sort(point, point+n, cmp);
    for (int i = 0; i < n; i++)
        cout << point[i].first << ' ' << point[i].second << '\n';

    return 0;
}