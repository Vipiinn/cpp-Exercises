#include<iostream>
using namespace std;

class player{

private:
    int health;
    int age;
    int score;
    bool alive;

public:
    //setter
    void setHealth(int Health){
        this->health = health; // this -> is function wala health hai aur health private class wala health hai
    } 
    
    void setAge(int age){
        this->age = age;
    }

    void setScore(int score){
        this->score = score;
    }

    void setIsAlive(bool alive){
        this->alive = alive;
    }

    //getter
    int getHealth(){
        return health; // this -> is function wala health hai aur health private class wala health hai
    } 
    
    int getAge(){
        return age;
    }

    int getscore(){
        return score;
    }

    bool isAlive(){
        return alive;
    }
};

//function to add the score of both the player
int addScore(player a , player b){
    return a.getscore() + b.getscore();
}

player getMaxScore(player a , player b){
    if(a.getscore() > b.getscore()) return a;
    else return b;
}


int main(){

    player vipin;
    player vikash;

    vipin.setHealth(90);
    vipin.setAge(19);
    vipin.setScore(100);
    vipin.setIsAlive(true);


    vikash.setHealth(80);
    vikash.setAge(20);
    vikash.setScore(90);
    vikash.setIsAlive(true);

    cout<<addScore(vipin , vikash)<<endl;

    player ans = getMaxScore(vipin , vikash);
    cout<<ans.getscore()<<endl;

    cout<<endl;
    cout<<ans.getAge()<<endl;

}