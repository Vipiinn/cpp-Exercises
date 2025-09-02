#include<iostream>
#include<string>
using namespace std;

void generate(string ans , int n){

    //base case
    if(ans.length() == n){
        cout<<ans<<endl;
        return;
    }

    generate(ans+'0' , n);
    if(ans=="" || ans[ans.length()-1]=='0'){
        generate(ans+'1' , n);
    }
    
}

int main(){
    int n = 3;

    generate("" , n);
}