// In this program we will find trailing zero
// in the factorial of a number
// Ex: 5!=120, so number of trailing zero is 1
#include <iostream>
using namespace std;

//Ist : Naive method for finding trailing zero
// Linear Time Complexity
int trailZero_naive(int n){
    int fact=1;
    // first finding factorial of n
    for(int i=2; i<=n; i++)
        fact*=i;
    // now the naive logic to count no of zeros in the last 
    int count=0;
    while(fact%10==0){
        fact/=10;
        count++;
    }
    return count;
}

// IInd : Effincient method for finding trialing zero
// Logarithmic Time Complexity
// in this method we have used the logic we don't need to calculate 
// the factorial of number for knowing the number of zeros in it
// just we have to know that how many 5's is present in the factorial of n
// this will be equal to the number of zeros
// Ex : in 5! there is only 5 is present so, trailing zero =1
int trailingZero_eff(int n){
    int count=0;
    for(int i=5; i<=n; i*=5)
        count+=n/i;
    return count;
}

int main(){
    int n;
    cin>>n;
    // cout<<trailZero_naive(n)<<endl;
    cout<<trailingZero_eff(n)<<endl;
    return 0;
}