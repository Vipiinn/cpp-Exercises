#include<iostream>
#include<string>
using namespace std;

char maxiOccChar(string str){
    int arr[26] = {0};
    for(int i=0;i<str.length();i++){
        int n = str[i] - 'a';
        arr[n]++;
    }

    int maxi = -1;
    int ans = 0;
    for(int i=0;i<26;i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    return ans + 'a';
}

int main(){
    string s;
    cout<<"Enter string -> ";
    cin>>s;

    

    cout<<"ans is => "<<maxiOccChar(s);


}