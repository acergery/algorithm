// 짝수와 홀수
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(int num) {
    string answer = (num%2) ? "Odd": "Even";
    return answer;
}

int main(void) {
    cout << solution(3) << '\n';
    cout << solution(4) << '\n';
}