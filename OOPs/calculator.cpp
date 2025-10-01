#include<iostream>
using namespace std;

class calculator{
    public:
    int a; //data member
    int b;

    void add(){ // data function
        cout<<"a + b -> "<<a+b<<endl;
    }

    void substract(){
        cout<<"a - b -> "<<a-b<<endl;
    }

    void multiplication(){
        cout<<"a * b -> "<<a*b<<endl;
    }
};


int main(){

    calculator calsi;
    calsi.a = 10;
    calsi.b = 5;

    calsi.add();
    calsi.substract();
    calsi.multiplication();

}