// The Balance of the World (균형 잡힌 세상)
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    while (true) {
        stack<char> s;
        bool balance = true;
        getline(cin, str);
        if (str == ".") 
            break;

        for (auto it : str) {
            if (it == '(' || it == '[') 
                s.push(it);            
            else if (it == ')' || it == ']') {
                if (s.empty()) 
                    s.push('x');
                
                if ((it == ')' && s.top() == '(') || (it == ']' && s.top() == '['))
                    s.pop();
                else 
                    balance = false;          
            }
            if (!balance)
                break;       
        }

        if (!s.empty())
            balance = false;
        
        (balance) ? cout << "yes\n": cout << "no\n";
    }

    return 0;
}