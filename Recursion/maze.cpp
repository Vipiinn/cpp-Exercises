#include<iostream>
using namespace std;

int totalWays(int sr , int sc , int er , int ec){
    //base case
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;

    int rightWays = totalWays(sr , sc+1 , er , ec);
    int downWays = totalWays(sr+1 , sc , er , ec);

    int ans = rightWays + downWays;
    return ans;
}

int main(){
    int row , col , stRow , stCol;
    cout<<"Enter total no of rows -> ";
    cin>>row;
    cout<<"Enter total no of columns -> ";
    cin>>col;
    cout<<"Enter starting row -> ";
    cin>>stRow;
    cout<<"Enter starting col -> ";
    cin>>stCol;

    int ans = totalWays(stRow , stCol , row , col);

    cout<<"total no of ways to reach the destination -> "<<ans;
}