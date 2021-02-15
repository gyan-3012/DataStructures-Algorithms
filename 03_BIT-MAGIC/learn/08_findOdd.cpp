#include <iostream>
using namespace std;

// Naive solution for finding one odd occurring element in the given array
// Time complexity : O(n^2)
void findOdd_naive(int arr[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i])
                count++;
        }
        if(count%2 != 0){
            cout<<arr[i]<<endl;
            break;
        }
    }
}

// Efficient solution for finding one odd occurrig element in the given array
// Time complexity : O(n)
// This method is based on the concept of xor operator
void findOdd_eff(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++)
        res ^= arr[i];
    cout<<res<<endl;
}

int main(){
    int arr[] = {2, 3, 5, 5, 3, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    findOdd_eff(arr, n);
    findOdd_naive(arr, n);
    return 0;
}

/* 
Imp fact of XOR(^) operator: 
    1) a^a = 0
    2) a^0 = a
    3) a^b = b^a
    4) a^(b^c) = (a^b)^c
*/