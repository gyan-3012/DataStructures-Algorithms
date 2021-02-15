// Bitwise NOT : ~1 = 0, ~0 = 1
// if the sizeof(int) = 4 = 32bit
// for unsigned int n :-> (~n) = (2^32-1) - n = (4294967295 - n)
// -n = 2's complement of n = (2^32) - n
// for signed int n :-> (~n) = (2^32-1) - n = (2's complement of n)-1 = (-n-1)
#include <iostream>
using namespace std;

int main(){
    // unsigned int : (~n) = (4294967295 - n)
    unsigned int x = 1;
    cout << (~x) << endl;   // (4294967295 - 1) = 4294967294
    x = 5;
    cout << (~x) << endl;   // (4294967295 - 5) = 4294967290

    // signed int : (~n) = (-n-1)
    int y = 1;
    cout << (~y) <<endl;    // (-1-1) = -2
    y = 5;
    cout << (~y) << endl;   // (-5-1) = -6
    y = -12;
    cout << (~y) << endl;   // (-(-12)-1) = 12-1 = 11
    return 0;
}