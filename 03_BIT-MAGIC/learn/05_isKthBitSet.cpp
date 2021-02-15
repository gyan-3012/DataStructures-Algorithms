// kth bit SET : if kth bit is 1, else NOT SET
#include <iostream>
using namespace std;

// function to check the kth bit 
// of number n is set or not 
// using left shift operator
void isKthBitSet_1st(int n, int k){
    if(n & (1<<(k-1)))
        cout<<"SET"<<endl;
    else
        cout<<"NOT SET"<<endl;
}

// function to check the kth bit 
// of number n is set or not 
// using right shift operator
void isKthBitSet_2nd(int n, int k){
    if((n>>(k-1)) & 1)
        cout<<"SET"<<endl;
    else 
        cout<<"NOT SET"<<endl;
}

int main(){
    int n=5, k=1;
    isKthBitSet_1st(n, k);
    isKthBitSet_2nd(n, k);
    return 0;
}
