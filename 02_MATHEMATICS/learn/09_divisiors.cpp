#include <iostream>
using namespace std;

// 1st : Naive solution for printing 
// all the devisiors of a number n
// Time complexity : O(n)
void printDivisiors_naive(int n){
    for(int i=1; i<=n; i++)
        if(n%i == 0)
            cout<<i<<" ";
    cout<<endl;
}

// 2nd : Efficient solution for printing 
// all the devisiors of a number n
// Time complexity : O(n^1/2)
// But these numbers will be in unordered manner
void printDivisiors_eff_unordered(int n){
    for(int i=1; i*i<=n; i++){
        if(n%i == 0){
            cout<<i<<" ";
            if(i != n/i)
                cout<<n/i<<" ";
        }
    }
    cout<<endl;
}

// 3rd : Efficient solution for printing 
// all the devisiors of a number n
// Time complexity : O(n^1/2)
void printDivisiors_eff_ordered(int n){
    int i=1;
    for(i=1; i*i<n; i++){
        if(n%i == 0)
            cout<<i<<" ";
    }
    for( ; i>=1; i--){
        if(n%i == 0)
            cout<<n/i<<" ";
    }
    cout<<endl;
}


int main(){
    int n; 
    cin>>n;
    printDivisiors_naive(n);
    printDivisiors_eff_unordered(n);
    printDivisiors_eff_ordered(n);
    return 0;
}