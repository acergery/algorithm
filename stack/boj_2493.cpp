// 탑
#include <bits/stdc++.h>
using namespace std;

const int MX = 500005;
int n, arr[MX];
stack<pair<int, int>> s;

int main(void) {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        while (!s.empty() && arr[i] > s.top().second) 
            s.pop();
        
        if (s.empty())
            cout << "0 ";
        else
            cout << s.top().first << ' ';        
        s.push(make_pair(i + 1, arr[i]));
    }   

    return 0;
}