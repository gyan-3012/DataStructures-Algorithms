#include <iostream>
using namespace std;

// Ist : Naive solution for finding the 
// greatest common divisior of two number 
int gcd_naive(int a, int b){
    int res=1;
    // maximum number that can devide a and b 
    // will be upto minimum of these two numbers.
    int min=(a>=b)? b: a;
    
    // we iterate from min to 1, which number will devide both 
    // of the number, we will return that number
    for(int i=min; i>=1; i--){
        if (a%i==0 && b%i==0){
            res=i;
            break;
        }
    }
    return res;   
}

// Eucledian Algorithm : 
// An efficient algorithm for finding greatest common divisior
int gcd_eff(int a, int b){
    while(a!=b){
        if(a>b)
            a-=b;
        else
            b-=a;    
    }
    return a;
}

// Optimized Eucledian Algorithm
// Best algorithm for finding greatest common divisior
int gcd_opt(int a, int b){
    if(b==0)
        return a;
    return gcd_opt(b, a%b);
}

int main(){
    int a, b;
    cin>>a>>b;
    // cout<<gcd_naive(a, b)<<endl;
    // cout<<gcd_eff(a, b)<<endl;
    cout<<gcd_opt(a, b)<<endl;
    return 0;
}