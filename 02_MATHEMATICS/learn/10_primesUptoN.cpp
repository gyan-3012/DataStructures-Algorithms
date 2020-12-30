#include <iostream>
#include <vector>
using namespace std;

// best solution for checking the number is prime or not
// Time complexity : O(n to the power 1/2) but optimized
bool checkPrime(int n){
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5; i*i<=n; i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}


// 1st : Naive method to find the 
// all prime numbers upto number n
// Time complexity : O(n^3/2)
void primes(int n){
    for(int i=2; i<=n; i++){
        if(checkPrime(i))
            cout<<i<<" ";
    }
    cout<<endl;
}


// 2nd : Sieve of Eratosthenes(optimized)
// An efficient method for finding all the 
// primes numbers from 1 to n
void sieve_opt_1st(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i*i<=n; i++){
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i)
                isPrime[j]=false;
        }
    }
    for(int i=2; i<=n; i++)
        if(isPrime[i])
            cout<<i<<" ";
    cout<<endl;
}

// 3rd : Sieve of Eratosthenes
// shorter implementation of optimized seive
void sieve_opt_2nd(int n){
    vector<bool> isPrime(n+1, true);
    for(int i=2; i<=n; i++){
        if(isPrime[i]){
            cout<<i<<" ";
            for(int j=i*i; j<=n; j+=i)
                isPrime[j]=false;
        }
    }
    cout<<endl;
}


int main(){
    int n;
    cin>>n;
    primes(n);
    sieve_opt_1st(n);
    sieve_opt_2nd(n);
    return 0;
}