// Prime Number : prime number is a number that is only divisible by 1 and itself
// every prime number can be represented in the form of (6*n+1) or (6*n-1) exept 2 and 3
// 2 and 3 is only two consequtive prime number
#include <iostream>
using namespace std;

// Naive method for checking the number is prime or not
// Time complexity : O(n)
bool isPrime_naive(int n){
    if(n==1)
        return false;
    for(int i=2; i<n; i++)
        if(n%i==0)
            return false;
    return true;
}

// Better solution for checking the number is prime or not
// Time complexity : O(n to the power 1/2)
bool isPrime_eff(int n){
    if(n==1)
        return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}

// best solution for checking the number is prime or not
// Time complexity : O(n) to the power 1/2) but optimized
bool isPrime_eff_opt(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    // cout<<isPrime_naive(n)<<endl;
    // cout<<isPrime_eff(n)<<endl;
    cout<<isPrime_eff_opt(n)<<endl;
    return 0;
}