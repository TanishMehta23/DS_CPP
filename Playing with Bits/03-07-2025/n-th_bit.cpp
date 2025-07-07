#include <iostream>
using namespace std;

int main(){
    int num, n;

    cin >> num;
    cin >> n;
    
    int result = (num >> n) & 1;
    
    cout << result;

    return 0;
}

// this was for ith bit from right
// if i want from left side lets say what's the third bit from left?
// it will be 32-1-3 i.e. 28th bit from right