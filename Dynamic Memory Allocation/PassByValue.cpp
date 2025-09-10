#include<iostream>
using namespace std;

//update function me n ki copy create hui thi jo ki main function me update nahi hui..
void update(int n){
    n++;
}

int main(){

    int n = 5;
    cout<<"Before -> "<<n<<endl;;

    update(n);

    cout<<"After -> "<<n<<endl;

}