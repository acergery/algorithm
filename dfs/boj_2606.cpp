// 바이러스
#include <bits/stdc++.h>
using namespace std;

const int MX = 101;
int pc[MX][MX];
bool vis[MX];
int n, e_num, a, b, cnt;

void dfs(int x) {
    vis[x] = true;
    for (int i = 1; i <= n; i++) {
        if (pc[x][i] == 1 && vis[i] == false)
            dfs(i);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> e_num;
    for (int i = 0; i < e_num; i++) {
        cin >> a >> b;
        pc[a][b] = 1;
        pc[b][a] = 1;
    }

    dfs(1);

    for (int i = 1; i <= n; i++) 
        if (vis[i])
            cnt++;    
    cout << cnt-1;        

    return 0;
}