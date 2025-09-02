#include<iostream>
using namespace std;

int power(int a , int b){
  //  int ans = 1;
    if(b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    
    return a * power(a , b-1);

}

int main(){
    int a , b;
    cout<<"Enter base and power ->";
    cin>>a>>b;
    int ans = power(a,b);

    cout<<a<<" raised to the power "<<b<<" is -> "<<ans;
}