// 주사위 세개
#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int arr[3];

    for (int i = 0; i < 3; i++)
        cin >> arr[i];
    sort(arr, arr+3);
    if (arr[0] == arr[1] && arr[1] == arr[2]) 
        cout << 10000+arr[0]*1000;    
    else if (arr[0] != arr[1] && arr[1] != arr[2] && arr[2] != arr[0]) 
        cout << arr[2]*100; 
    else {
        if (arr[0] == arr[1] || arr[0] == arr[2])
            cout << 1000+arr[0]*100; 
        else        
            cout << 1000+arr[1]*100;       
    }
    return 0;
}