#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<string> brothers{"vishal", "abhivav", "daddu"};
    for(string brother: brothers){
        cout<<"Hello "<<brother<<"!\n";
    }
    return 0;
}