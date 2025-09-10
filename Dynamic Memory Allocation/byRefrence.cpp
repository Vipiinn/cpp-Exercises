#include<iostream>
using namespace std;

//&n se refrence variable create ho gyi isme n ki value update ho jayegi.. 
void update(int& n){
    n++;
}

int main(){

    int n = 5;
    cout<<"Before -> "<<n<<endl;;

    update(n);

    cout<<"After -> "<<n<<endl;

}