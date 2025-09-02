#include<iostream>
using namespace std;

void Hanoi(int n , char S , char H , char D){

    //base case
    if(n==0) return;

    //first call for n-1 disk
    Hanoi(n-1 , S , D , H);
    //printing source and destination
    cout<<S<<" -> "<<D<<endl;
    //second call
    Hanoi(n-1 , H , S , D);
}

int main(){
    int n;
    cout<<"Enter number of disk -> ";
    cin>>n;

    Hanoi(n , 'A' , 'B' , 'C'); // A , B and C are three rods
}