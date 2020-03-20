// 곱셈
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll func(ll a, ll b, ll c) {
    if (b == 0)
        return 1;
    else  {
        ll ans = func(a, b/2, c);
        ans = ans * ans % c;
        if (b%2 == 1)
            return a * ans % c;
        else 
            return ans;        
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    cout << func(a, b, c);

    return 0;
}