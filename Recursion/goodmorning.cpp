#include<iostream>
using namespace std;

void great(int n){
    if(n == 0){
        return;
    }
    cout<<"good morning"<<endl;
    great(n-1);
}

int main(){
    int n;
    cout<<"Entre number -> ";
    cin>>n;
    great(n);
}



