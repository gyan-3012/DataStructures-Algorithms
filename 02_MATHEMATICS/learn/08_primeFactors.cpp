#include <iostream>
using namespace std;

// best solution for checking the number is prime or not
// Time complexity : O(n to the power 1/2) 
bool isPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}

// 1st : Naive solution to find prime factors
// of a given number n
// Time complexity : O(logn . n^3/2)
void printPrimeFactors_naive(int n){
    if(n<=1) return;
    for(int i=2; i<=n/2; i++){
        if(isPrime(i)){
            int x=i;
            while(n%x == 0){
                cout<<i<<" ";
                x*=i;
            }
        }
    }
    cout<<endl;
}

// 2nd : efficient solution for finding 
// prime factors a given number n
// Time complexity : (log(n) . n^1/2)
void printPrimeFactors_eff(int n){
    if(n<=1) return;
    for(int i=2; i*i<=n; i++){
        while(n%i == 0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
        cout<<n;
    cout<<endl;
}

// 3rd : more efficient and optimized solution
// to find prime factors of a given number n
// Time complexity : O(log(n) . n^1/2)
void printPrimeFactors(int n){
    if(n<=1) return;
    while(n%2 == 0){
        cout<<2<<" ";
        n/=2;
    }
    while(n%3 == 0){
        cout<<3<<" ";
        n/=3;
    }
    for(int i=5; i*i<=n; i+=6){
        while(n%i == 0){
        cout<<i<<" ";
        n/=i;
        }
        while(n%(i+2) == 0){
            cout<<i+2<<" ";
            n/=(i+2);
        }
    }
    if(n>3)
        cout<<n;
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    printPrimeFactors_naive(n);
    printPrimeFactors_eff(n);
    printPrimeFactors(n);
    return 0;
}