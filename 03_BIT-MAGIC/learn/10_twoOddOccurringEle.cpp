#include <iostream>
using namespace std;

// Naive solution for finding two odd number of occurring element in the given array
// Time complexity : O(n^2)
void twoOddOccurringEle_naive(int arr[], int n){
    for(int i=0; i<n; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(arr[j]==arr[i])
                count++;
        }
        if(count%2 != 0){
            cout<<arr[i]<<" ";
        }      
    }
    cout<<endl;
}

// Efficient solution for finding two odd number of occurring element in the given array
// Time complexity : O(n)
void twoOddOccurringEle_eff(int arr[], int n){
    int res1=0, res2=0, XOR=0;
    for(int i=0; i<n; i++)
        XOR ^= arr[i];
    int st = XOR & (~(XOR-1));  //Rightmost set bit
    for(int i=0; i<n; i++){
        if(st&arr[i])
            res1 ^= arr[i];
        else 
            res2 ^= arr[i];
    }
    cout<<res1<<" "<<res2<<endl;
}

int main(){
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    twoOddOccurringEle_naive(arr, n);
    twoOddOccurringEle_eff(arr, n);
    return 0;
}