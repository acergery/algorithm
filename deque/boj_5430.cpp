// Integer Lists (AC)
#include <bits/stdc++.h>
using namespace std;

const int NUM_MX_LEN = 4; // MX: '100]'
deque<int> dq;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tc;
    cin >> tc;

    while (tc--) {
        string fn, num;
        bool error_flag = false, r_flag = false;
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
                r_flag = !r_flag;
            }
            else if (it == 'D') {
                if (dq.empty()) {
                    error_flag = true;
                    break;
                }
                else {            
                    if (!r_flag) 
                        dq.pop_front();
                    else
                        dq.pop_back();
                }
            }
        }

        if (error_flag){
            cout << "error\n";
        }
        else {
            if (r_flag)
                reverse(dq.begin(), dq.end());

            cout << '[';    
            while (dq.size() > 1) {
                cout << dq.front() << ',';
                dq.pop_front();
            }

            if (!dq.empty())
                cout << dq.front();
            cout << "]\n";
        }

        dq.clear();
    }

    return 0;
}