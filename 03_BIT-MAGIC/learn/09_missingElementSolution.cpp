#include <iostream>
using namespace std;

int missingElement(int arr[], int n){
    int res = n+1;
    for(int i=0; i<n; i++){
        res = res^(i+1)^arr[i];
    }
    return res;
}

int main(){
    int arr[] = {3, 2, 5, 4, 7, 1};
    int n = sizeof(arr)/sizeof(arr);
    cout<<missingElement(arr, n)<<endl;
    return 0;
}