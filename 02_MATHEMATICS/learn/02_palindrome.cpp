// Palindrome number :- a number is said to be 
// palindrome if it is euals to it's reverse number
// Ex : 4, 46564 etc.
#include <iostream>
using namespace std;

bool isPal(int n){
    int rev=0, temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=(rev*10)+ld;
        temp/=10;
    }
    return (rev==n);
}

int main(){
    int n;
    cin>>n;
    if(isPal(n))
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}