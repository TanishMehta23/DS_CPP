#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {2, 9, 3, 8, 18, 6, 2, 4, 9, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int suffix[n];

    for(int i = n - 1; i >= 0; i--){
        if(i == n - 1){
            suffix[i] = arr[i];
        }
        else{
            suffix[i] = max(arr[i], suffix[i+1]);
        }
    }

    int ans = INT32_MIN;
    for(int i = 0; i < n; i++){
        int cp = arr[i];
        int sp = suffix[i];
        int profit = sp - cp;
        if(profit > ans){
            ans = profit;
        }
    }
    cout << ans << " ";
}