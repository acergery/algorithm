// 시저 암호
// 아스키코드 값 주의 (Z:90, a:97)
#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(string s, int n) {
    string answer = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue;
        else if (isupper(s[i])) 
            s[i] += (s[i]+n > 'Z') ? n-26 : n;    
        else if (islower(s[i])) 
            s[i] += (s[i]+n > 'z') ? n-26 : n;       
    }
    return s;
}

int main(void) {
    cout << solution("AB", 1) << '\n';
    cout << solution("z", 1) << '\n';
    cout << solution("a B z", 4) << '\n';
    cout << solution("z", 1) << '\n';
    cout << solution("Z", 10) << '\n';
    cout << solution("a B z", 4) << '\n';
    cout << solution("aBZ", 20) << '\n';
    cout << solution("y X Z", 4) << '\n';
    cout << solution(". h z", 20) << '\n';

}