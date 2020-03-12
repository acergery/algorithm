// Integer Lists (AC)
#include <bits/stdc++.h>
using namespace std;

const int NUM_MX_LEN = 3;
deque<int> dq, tmp_dq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;
    while (tc--) {
        string fn, num;
        bool error_flag = false;
        char *tmp_num, *c;
        int n;

        cin >> fn >> n >> num;

        tmp_num = new char[n * (NUM_MX_LEN + 1)];
        strcpy(tmp_num, num.c_str());
        c = strtok(tmp_num + 1, ",");

        if (c[0] != ']') {
            while(c != NULL) {
                dq.push_back(atoi(c));
                c = strtok(NULL, ",");
            }
        }

        for (auto it : fn) {
            if (it == 'R') {
                while (!dq.empty()) {
                    tmp_dq.push_back(dq.front());
                    dq.pop_front();
                }
                while (!tmp_dq.empty()) {
                    dq.push_back(tmp_dq.back());
                    tmp_dq.pop_back();
                }
            }
            else if (it == 'D') {
                if (dq.empty()) {
                    error_flag = true;
                    break;
                }
                else {               
                    dq.pop_front();
                }
            }
        }
        if (error_flag){
            cout << "error\n";
        }
        else {
            if (dq.empty())
                cout << "[";
            else {
                cout << '[' << dq.front();
                dq.pop_front();
            }
            while (dq.size() > 1) {
                cout << ',' << dq.front();
                dq.pop_front();
            }
            if (dq.empty())
                cout << "]\n";
            else            
                cout << dq.front() << "]\n";
        }
        dq.clear();
        tmp_dq.clear();
    }

    return 0;
}