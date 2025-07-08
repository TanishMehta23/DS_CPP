
// with making pair

#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[] = {-8, -5, 7, 6, 4, -6};
    int target;
    cin >> target;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j <= n - 1; j++){
            int sum = arr[i] + arr[j];
            if(sum == target){
                cout << i << " ";
                cout << j << "\n";
                cout << "Yes";
                return 0;
            }
        }
    }
}




// With linear sorting and fast

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[] = {-8, -5, 7, 6, 4, -6};
    int n = 6;
    int target;
    cin >> target;
    sort(arr, arr + n);                         // sorted array

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    for(int i = 0; i <= n - 1;){
        for(int j = n - 1; j >= 0;){
            if(arr[i] + arr[j] < target) {
                i++;
            }
            else if(arr[i] + arr[j] > target) {
                j--;
            }
            else if(arr[i] + arr[j] == target) {
                cout << i << " ";
                cout << j << "\n";
                cout << "Yes";
                return 0;
            }
        }
    }                                                 // as we try for -14 it results in 0 1 this is because array is sorted 
}