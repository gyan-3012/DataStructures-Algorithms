#include <iostream>
using namespace std;

// 1st : Naive method to find the 
// value of x to the power n
// Time complexity : O(n)
int power_naive(int x, int n){
    int res=1;
    for(int i=0; i<n; i++)
        res *= x;
    return res;
}


// 2nd : Efficient method to find the 
// value of x to the power n
// Recursive Method
// Time complexity : O(log(n))
int power_eff_recur(int x, int n){
    if(n == 0)
        return 1;
    int temp = power_eff_recur(x, n/2);
    temp = temp * temp;
    if(n%2 == 1)
        temp = temp * x;
    return temp;
}


// 3rd : Efficient method to find the 
// value of x to the power n
// Iterative Method (Binary Exponentiation)
// Time complexity : O(log(n))
int power_eff_itr(int x, int n){
    int res=1;
    while(n>0){
        if(n%2 != 0)    // or if(n & 1)
            res = res * x;
        x = x * x;
        n = n / 2;      // or n = n>>1
    }
    return res;
}


int main(){
    int x, n;
    cin>>x>>n;
    cout<<power_naive(x, n)<<endl;
    cout<<power_eff_recur(x, n)<<endl;
    cout<<power_eff_itr(x, n)<<endl;
    return 0;
}