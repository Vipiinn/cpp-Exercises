#include<iostream>
using namespace std;

int printSum(int n){
    if(n==0){
        return 0;
    }
    return n + printSum(n-1);
}

int main(){
    int n;
    cout<<"Enter Number -> ";
    cin>>n;
    int ans = printSum(n);

    cout<<"ans is -> "<<ans<<endl;
}