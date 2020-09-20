// 약수의 합
#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i < n+1; i++) {
        if (!(n%i)) answer += i;
    }
    return answer;
}

int main(void) {
    cout << solution(12) << '\n';
    cout << solution(5) << '\n';
    cout << solution(3000) << '\n';
}