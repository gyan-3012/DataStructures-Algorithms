#include <iostream>
#include <cmath>
using namespace std;

//Ist : Iterative solution
int noOfDigits_itr(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}

// IInd : Recursive solution
int noOfDigits_recur(int n){
    if(n==0)
        return 0;
    return 1+noOfDigits_recur(n/10);
}

// IIIrd : Logarithmic solution(best solution)
// Time complexity : constant
int noOfDigits_log(int n){
    //log10(n) : log of n at base 10
    return log10(n)+1; 
}

int main(){
    int n; 
    cin>>n;
    // cout<<noOfDigits_recur(n)<<endl;
    // cout<<noOfDigits_itr(n)<<endl;
    cout<<noOfDigits_log(n)<<endl;
    return 0;
}