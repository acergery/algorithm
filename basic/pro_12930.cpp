// 이상한 문자 만들기
#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = 0;
    for (char ch: s) {
        if (ch == ' ') idx = -1;
        else 
            ch = (idx%2) ? tolower(ch) : toupper(ch); 
        answer.push_back(ch);
        idx++;
    }
    return answer;
}

int main(void) {
    cout << solution("try hello world") << '\n';
}