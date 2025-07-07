// Combining Sorted 2 arrays to single sorted array


// Using Bubble Sorting

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {-3, 5, 8, 12, 18, 19, 23, 27};
    int arr2[] = {-5, -4, 0, 4, 5}; 

    int s1 = sizeof(arr1) / sizeof(arr1[0]);
    int s2 = sizeof(arr2) / sizeof(arr2[0]);

    int combined[s1 + s2];

    for(int i = 0; i < s1; i++){
        combined[i] = arr1[i];
    }

    for(int i = 0; i < s2; i++){
        combined[i + s1] = arr2[i];
    }

    for(int i = 0; i < (s1 + s2) - 1; i++){
        for(int j = 0; j < (s1 + s2) - 1 - i; j++){
            if(combined[j] > combined[j + 1]){
                int temp = combined[j];
                combined[j] = combined[j+1];
                combined[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < s1 + s2; i++){
        cout << combined[i] << " ";
    }
}



// Using merge sorting

#include <iostream>
using namespace std;

int main(){
    int arr1[] = {-3, 5, 8, 12, 18, 19, 23, 27}; 
    int arr2[] = {-5, -4, 0, 4, 5}; 

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    int n3 = n1 + n2;
    int ans[n3];
    int i = 0, j = 0, k = 0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            ans[k++] = arr1[i++];
        }
        else{
            ans[k++] = arr2[j++];
        }
    }

    while(i < n1) ans[k++] = arr1[i++];
    while(j < n2) ans[k++] = arr2[j++];

    for(int i = 0; i < n3; i++){
        cout << ans[i] << " ";
    }
}