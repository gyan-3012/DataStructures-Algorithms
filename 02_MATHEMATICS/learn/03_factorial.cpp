#include <iostream>
using namespace std;

// we are assuming that n is greater or equal to zero
// iterative solution
int fact_itr(int n){
    int res=1;
    for(int i=2; i<=n; i++)
        res*=i;
    return res;
}

// recursive solution
int fact_recur(int n){
    if(n==0)
        return 1; 
    return n*fact_recur(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact_itr(n)<<endl;
    cout<<fact_recur(n)<<endl;
    return 0;
}