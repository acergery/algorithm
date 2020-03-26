// 상근날드
#include <bits/stdc++.h>
using namespace std;

int cost[5];
vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < 5; i++)
        cin >> cost[i];    
    for (int i = 0; i < 3; i++) 
        for (int j = 3; j < 5; j++) 
            v.push_back(cost[i] + cost[j] - 50);
    sort(v.begin(), v.end());
    cout << v[0];

    return 0;
}