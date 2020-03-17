// 숨바꼭질 2
#include <bits/stdc++.h>
using namespace std;

const int MX = 100000;
int dist[MX + 2];
queue<int> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, fast, cnt = 0;
    cin >> n >> k;
    fill(dist, dist+MX+2, -1);

    dist[n] = 0;
    q.push(n);
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        if (cur == k) {
            fast = dist[k];
            cnt++;
        }

        for (int i = 0; i < 3; i++) {
            int next;
            if (i == 0) 
                next = cur - 1;
            else if (i == 1)
                next = cur + 1;
            else
                next = cur * 2;
                
            if (next < 0 || next > MX)
                continue;
            if (dist[next] >= 0 && dist[next] != dist[cur] + 1)
                continue;
            dist[next] = dist[cur] + 1;
            q.push(next);            
        }
    }

    cout << fast << '\n' << cnt;

    return 0;
}