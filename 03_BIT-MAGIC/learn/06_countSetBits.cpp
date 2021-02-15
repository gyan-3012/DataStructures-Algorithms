#include <iostream>
using namespace std;
int table[256];

void initializeTable(){
    table[0]=0;
    for(int i=1; i<256; i++){
        table[i] = table[i/2] + (i&1);
    }
}

// Naive solutin for finding count of set Bits
// Time complexity : O(number of bits)
int countSetBits_naive(int n){
    int count=0;
    while(n>0){
        if(n&1)
            count++;
        n=n>>1;
    }
    return count;
}


// Brian Kerningam's Algorithm for finding count of set bits
// Time complexity : O(number of set bits)
int countSetBits_eff(int n){
    int count=0;
    while(n>0){
        n = n & (n-1);
        count++;
    }
    return count;
}

// Best algorithm for counting setBits if this function is used frequently
int countSetBits(int n){
    int count = 0;
    count += table[n & 0xff];
    n = n>>8;
    count += table[n & 0xff];
    n = n>>8;
    count += table[n & 0xff];
    n = n>>8;
    count += table[n & 0xff];
    return count;
}

int main(){
    int n=15;
    initializeTable();
    cout<<countSetBits_naive(n)<<endl;
    cout<<countSetBits_eff(n)<<endl;
    cout<<countSetBits(n)<<endl;
    return 0;
}