#include<iostream>
using namespace std;

int noOfWays(int n){

    //base case
    if(n==0 || n==1){
        return 1;
    }

    if(n < 0){
        return -1;
    }

    return noOfWays(n-1) + noOfWays(n-2);
}

int main(){
    int n;
    cout<<"Enter number of stairs -> ";
    cin>>n;

    int ans = noOfWays(n);

    cout<<"number of ways -> "<<ans;
}