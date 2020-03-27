// 약수
#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int real_num, tmp;
    cin >> real_num;
    for (int i = 0; i < real_num; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    cout << v.front()*v.back();

    return 0;
}