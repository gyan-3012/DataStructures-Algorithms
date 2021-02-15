#include <iostream>
using namespace std;

int main(){
    int x = 33;
    cout << (x >> 1) << endl;   // 33 >> 1 : ...100001 >> 1 : ...010000 = 16 = [33 / (2^1)]
    cout << (x >> 2) << endl;   // 33 >> 2 : ...100001 >> 2 : ...001000 = 8  = [33 * (2^1)] : here we used ^ to show power
    int y = 4;
    int z = (x >> y);           // 33 >> 4 = [33 / (2^4)] = [33 / 16] = 2
    cout << z;
    return 0;
}

// Imp Note :- 
// (n >> k) = [n / (2^k)]
// here 2^k means (2 to the power k)
// this right shift operator can be used to devide a number by the various powers of two
// Ex : n / 2 = n >> 1, n / 4 = n >> 2, n / (2^k) = n >> k