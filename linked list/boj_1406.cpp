// editor
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int m;
    list<char> l;
    list<char>::iterator t = l.end();
    cin >> s >> m;

    for (auto i : s)
        l.push_back(i);

    while(m--) {
        char cmd;
        cin >> cmd; 
        switch(cmd) {
            case 'L':
                if (t != l.begin()) 
                    t--;
                break;
            case 'D':
                if (t != l.end())
                    t++;
                break;
            case 'B':
                if (t != l.begin()) {
                    t--;
                    t = l.erase(t);
                }
                break;
            case 'P':
                char ch;
                cin >> ch;
                l.insert(t, ch);
                break;
        }
    }
    for (auto i : l)
        cout << i;

    return 0;
}