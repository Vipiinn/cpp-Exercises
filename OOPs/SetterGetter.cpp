#include<iostream>
using namespace std;

class player{
private:
    int score;
    int health;

public:

    //setter
    void setScore(int s){
        //cout<<"score set kiya ja rha hai";
        score = s;
    }

    void setHealth(int h){
        //cout<<"health change kiyaja rha hai";
        health = h;
    }

    //getter
    int gethealth(){
        return health;
    }

    int getscore(){
        return score;
    }

};


int main(){

    player vipin;
    vipin.setScore(100);
    vipin.setHealth(90);

    cout<<vipin.gethealth()<<endl;
    cout<<vipin.getscore()<<endl;

}