#include <iostream>
using namespace std;

bool isPow2_naive(int n){
    if(n==0) 
        return false;
    while(n!=1){
        if(n&1)
            return false;
        n = n>>1;
    }
    return true;
}

// This function is based on the concept that a number will be power
// of 2 if there is only one setBit in its binary representation
bool isPow2_eff(int n){
    if(n==0) 
        return false;
    return !(n&(n-1));
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"isPow2_naive("<<n<<") : "<<((isPow2_naive(n))? "Yes": "No")<<endl;
    cout<<"isPow2_eff("<<n<<") : "<<((isPow2_eff(n))? "Yes": "No")<<endl;
    return 0;
}