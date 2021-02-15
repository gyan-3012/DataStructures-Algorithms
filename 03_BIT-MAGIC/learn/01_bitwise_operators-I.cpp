// Bitwise OR (|) : (a | b) --> if both bit is 0 then 0 else 1
// Bitwise AND (&) : (a & b) --> if both bit is 1 then 1 else 0
// Bitwise XOR (^) ; (a ^ b) --> if both bit is different then 1 else 0
#include <iostream>
using namespace std;

int main(){
    int a = 3, b = 6;
    cout << (a | b) << endl;  // 011 | 110 = 111 = 7
    cout << (a & b) << endl;   // 011 & 110 = 010 = 2
    cout << (a ^ b) << endl;   // 011 & 110 = 101 = 5
    return 0;
}

// An Imp property of AND operator : 
// if AND of any number with 1 is 0 then number is EVEN else the number is ODD
// (n&1==0)? cout<<"EVEN" : cout<<"ODD";