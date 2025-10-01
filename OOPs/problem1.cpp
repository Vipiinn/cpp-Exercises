#include<iostream>
using namespace std;

class book{
public:    
    int price;
    int noOfpages;
    char name;

    int countBooks(int p){
        if(price < p) return 1;
        else return 0;
    }

    bool isBookPresent(char book){
        if(name == book) return true;
        else return false;
    }


};

int main(){

    book atomic_habbit;
    atomic_habbit.name = 'H';
    atomic_habbit.price = 1000;
    atomic_habbit.noOfpages = 490;

    cout<<atomic_habbit.countBooks(2000)<<endl;

    cout<<atomic_habbit.isBookPresent('d')<<endl;


}