#include<iostream>
using namespace std;

void GenerateParentheses(string ans , int open , int close , int n){

    //base case
    if(close == n){
        cout<<ans<<endl;
        return;
    }
    if(open<n) GenerateParentheses(ans+'(',open+1,close,n);
    if(close<open) GenerateParentheses(ans+')',open,close+1,n);
}

int main(){
    int n = 3;

    GenerateParentheses("" , 0 , 0 , n);
}