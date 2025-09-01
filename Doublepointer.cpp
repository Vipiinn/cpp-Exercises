#include<iostream>
using namespace std;
int main(){

    int n = 5;
    int *ptr = &n;
    int **ptr2 = &ptr;

    cout<<"Address of n -> "<<ptr<<endl; 
    cout<<"value -> "<<*ptr<<endl;
    cout<<" "<<*ptr2<<endl;

    cout<<"Address of ptr1 -> "<<ptr2<<endl;
    cout<<"value -> "<<**ptr2<<endl;

}