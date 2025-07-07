// We have an array and We need to find the element which is not repeating or occurs odd number of times in the array.

#include <iostream>
using namespace std;
int main()
{
    int arr[]= {1, 1, 2, 2, 4, 4, 5, 7, 7, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);  
    
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans ^= arr[i];
    }
    
    cout << ans;
    return 0;
}