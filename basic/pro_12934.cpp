// 정수 제급곤 판별
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long buf = sqrt(n);
    answer = (buf*buf == n) ? (buf+1)*(buf+1): -1;

    return answer;
}

int main(void) {
    cout << solution(121) << '\n';
    cout << solution(3) << '\n';
}