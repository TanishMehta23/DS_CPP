// Using brutforce

#include <iostream>
using namespace std;

int main(){
    int arr[] = {-3, 8, 0, 5, -3, -2};
    int queries[][2] = {{0,2}, {1,3}, {2,5}, {1,4}};               // Output:- 5 13 0 10
    
    int n = sizeof(queries) / sizeof(queries[0]);

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = queries[i][0]; j <= queries[i][1]; j++){
            sum += arr[j];
        }
        cout << sum << " "; 
    }

    return 0;
}





// Using Prefix Sum

#include <iostream>
using namespace std;

int main(){
    int arr[] = {-3, 8, 0, 5, -3, -2};
    int queries[][2] = {{0,2}, {1,3}, {2,5}, {1,4}};    

    int n = sizeof(arr) / sizeof(arr[0]);
    int qn = sizeof(queries) / sizeof(queries[0]);

    int ps[n];

    for(int i = 0; i < n; i++){
        if(i == 0){
            ps[i] = arr[i];
        }
        else{
            ps[i] = arr[i] + ps[i - 1];
        }
    }

    for(int i = 0; i < qn; i++){
        int si = queries[i][0];
        int ei = queries[i][1];
        
        if(si == 0){
            cout << ps[ei] << " ";
        }
        else{
            cout << ps[ei] - ps[si - 1] << " ";
        }
    }

    return 0;
}