#include<iostream>
using namespace std;

void printSubset(string ans , string original , int idx){

    //base case
    if(idx == original.size()){
        cout << ans << endl;
        return;
    }

    char ch = original[idx];
    printSubset(ans+ch , original , idx+1);
    printSubset(ans , original , idx+1);

}

int main(){
    string str = "abc";
    printSubset("" , str , 0);
}