// First Set Bit Pos

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 0){
        return -1;
    }

    int ans = 1;
    
    while(n % 2 != 1){
        n = n >> 1;
        ans += 1;
    }
    
    cout << ans;
}