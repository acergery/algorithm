// Catch That Cow (숨바꼭질)
#include <bits/stdc++.h>
using namespace std;

const int MX = 100000;
queue<int> q;
int dist[MX+5];

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    fill(dist, dist + MX + 5, -1);

    dist[n] = 0;
    q.push(n);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (cur == k) {
            cout << dist[cur];
            break;
        }

        for (int i = 0; i < 3; i++) {
            int next;

            if (i == 0) next = cur - 1;
            else if (i == 1) next = cur + 1;
            else if (i == 2) next = 2 * cur;

            if (next < 0 || next > MX)
                continue;
            if (dist[next] >= 0)
                continue;
            dist[next] = dist[cur] + 1;
            q.push(next);
        }      
    }

    return 0;
}