#include <iostream>
using namespace std;

int main(){
    int x = 3;
    cout << (x << 1) << endl;   // 3 << 1 : ...0011 << 1 : ...0110 = 6  = 3 * (2^1) : here we used ^ to show power
    cout << (x << 2) << endl;   // 3 << 2 : ...0011 << 2 : ...1100 = 12 = 3 * (2^2 )
    int y = 4;
    int z = (x << y);           // 3 << 4 = 3 * (2^4) = 3 * 16 = 48
    cout << z;
    return 0;
}

// Imp Note : if in the binary representation of a number, at least k leading bits are zero then 
// (n << k) = n * (2^k)
// here 2^k means (2 to the power k)
// this left shift operator can be used to mutiple a number by the various powers of two
// Ex : n * 2 = n << 1, n * 4 = n <<2, n * (2^k) = n << k