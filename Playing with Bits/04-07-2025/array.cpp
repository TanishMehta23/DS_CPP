#include <iostream>
using namespace std;

int main()
{
    int arr[]={1, 2, 3, 5, 6, 6, 2, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}