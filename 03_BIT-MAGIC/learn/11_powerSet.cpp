#include <iostream>
#include <cmath>
using namespace std;

// function for generating power set of a given string
// Time complexity : O(n.2^n)
// where n is the length of string
void printPowerSet(string &str){
    int n = str.length();
    int powSize= pow(2, n);
    for(int counter=0; counter<powSize; counter++){
        for(int j=0; j<n; j++){
            if(counter & (1<<j))
                cout<<str[j];
        }
        cout<<endl;
    }

}

int main(){
    string str="abc";
    printPowerSet(str);
    return 0;
}