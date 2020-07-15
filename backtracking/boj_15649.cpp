// N과 M (1)
#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isUsed[10];

// 현재 k개 까지 수를 선택함
void func(int k) {
    // m개를 모두 선택한 경우, arr에 기록한 수 출력
    if (k == m) {
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }

    // 1부터 n까지의 수에 대해
    for (int i = 1; i <= n; i++) {
        if (!isUsed[i]) {       // 아직 i가 사용되지 않았으면
            arr[k] = i;         // k번째 수를 i로 정함
            isUsed[i] = true;   // i가 사용되었다고 표시
            func(k+1);          // k+1번째 수(다음 수)를 정하러 한 단계 더 들어감
            isUsed[i] = false;  // k번째 수가 i인 모든 경우에 대해 다 확인했으니
        }                       // 이제 i가 사용되지 않았다고 표시함
    }
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    func(0);    // arr[0]을 정한 후 func(1)을 호출 ...

    return 0;
}