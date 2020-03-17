// 숨바꼭질 3
// 가중치가 있으므로 bfs로는 풀리지 않는다.
// 다익스트라 알고리즘 사용하기
#include <bits/stdc++.h>
using namespace std;

const int MX = 100000;
int dist[MX+5];
queue<int> q;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    fill(dist, dist+MX+5, -1);

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
            if (i == 0)
                next = cur * 2;
            else if (i == 1)
                next = cur + 1;
            else if (i == 2)
                next = cur - 1;
            
            if (next < 0 || next > MX)
                continue;
            if (dist[next] >= 0)
                continue;
            if (i >= 1)
                dist[next] = dist[cur] + 1;
            else
                dist[next] = dist[cur];
            q.push(next);            
        }
    }

    return 0;
}