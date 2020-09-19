// 제일 작은 수 제거하기
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int mn = *min_element(arr.begin(), arr.end());
    for (auto tmp: arr) {
        if (tmp == mn) continue;
        answer.push_back(tmp);
    }
    // int idx = find(answer.begin(), answer.end(), mn) - answer.begin();
    // answer.erase(answer.begin() + idx);
    if (answer.empty()) answer.push_back(-1);

    return answer;
}

int main(void) {

}