#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a, int b){
    if(b==0)
        return a;
    return gcd(b, a%b);
}

// Naive solution for finding lowest common multiple
int lcm_naive(int a, int b){
    int res=max(a, b);
    while(true){
        if(res%a==0 && res%b==0)
            break;
        res++;
    }
    return res;
}

// Best and efficient algorithm for finding lcm
// In this algorithm we have used optimized 
// Euclidean algorithm to find lcm
int lcm_eff(int a, int b){
    return a*b/gcd(a, b);
}

int main(){
    int a, b;
    cin>>a>>b;
    // cout<<lcm_naive(a, b)<<endl;
    cout<<lcm_eff(a, b)<<endl;
    return 0;
}