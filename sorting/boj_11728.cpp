// 배열 합치기
#include <bits/stdc++.h>
using namespace std;

const int MX = 1000000 + 2;
int n, m;
int A[MX], B[MX], C[2*MX];
int idx_A, idx_B, idx_C;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];
    
    while (idx_A < n && idx_B < m) {
        if (A[idx_A] < B[idx_B])
            C[idx_C++] = A[idx_A++];
        else
            C[idx_C++] = B[idx_B++];
    }

    while (idx_A < n)
        C[idx_C++] = A[idx_A++];
    while (idx_B < m)
        C[idx_C++] = B[idx_B++];
    for (int i = 0; i < n+m; i++)
        cout << C[i] << ' ';

    return 0;
}