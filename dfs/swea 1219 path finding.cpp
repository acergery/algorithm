/*
    swea 1219 - Path Finding
    Date: 2020 / 02 / 05
*/
#include <iostream>
using namespace std;

void dfs(int adj[][100], bool visited[], int cur) {
    visited[cur] = true;
    for (int i = 0; i < 100; i++) {
        if (adj[cur][i] == 1 && visited[i] == false)
            dfs(adj, visited, i);
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 10;
    while (tc--) {
        int idx, path_num, ans = 0;
        int adj[100][100] = { 0, };
        bool visited[100] = { false, };

        cin >> idx >> path_num;
        for (int i = 0; i < path_num; i++) {
            int u, v;
            cin >> u >> v;
            adj[u][v] = 1;
        }
        dfs(adj, visited, 0);
        if (visited[99] == true)
            ans = 1;

        cout << '#' << idx << ' ' << ans << '\n';
    }

    return 0;
}