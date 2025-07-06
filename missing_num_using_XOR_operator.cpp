// Find Missing number using XOR operator

#include <iostream>
using namespace std;

int main(){
    int n = 10;
    
    int arr[] = {1,2,4,5,6,7,8,9,10};

    int missingnumber = 0;

    for(int i = 1; i <= n; i++){
        missingnumber ^= i; 
    }

    for(int i = 0; i < n - 1; i++){
        missingnumber ^= arr[i];
    }

    cout << missingnumber;
}