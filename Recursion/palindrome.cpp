#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str , int st , int end ){
    if (st >= end) return true;
    
    if(str[st] != str[end]) {
       return false;
    }
    
    return checkPalindrome(str , st + 1 , end - 1 );
    
}

int main(){
    string str = "noon";
    int st  = 0;
    int end = str.size()-1;
    
    bool ans = checkPalindrome(str , st , end);
    
    if(ans){
        cout<<"palindrome";
    }
    else{
        cout<<"not";
    }
}