// Maximum subarray sum for which size can vary
// Kadane's Algorithm

#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int arr[] = {-3, 4, 8, -9, 2, 6, 5, 8, -3, -2, -1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = INT32_MIN;
    int subarr_sum = 0;

    for(int i = 0; i < n; i++){
        subarr_sum += arr[i];
        if(subarr_sum > ans){
            ans = subarr_sum;
        }
        if(subarr_sum < 0){
            subarr_sum = 0;
        }
    }

    cout << ans;
    
    return 0;
}