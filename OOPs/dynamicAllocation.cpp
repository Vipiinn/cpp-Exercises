#include<iostream>
using namespace std;

class Gun{
public:
    int ammo;
    int damage;
    int scope;
};

class player{

private:    
    int age;
    int health;
    int score;
    bool alive;
    Gun gun;

public:
    //setter
    void setAge(int age){
        this->age = age;
    }

    void sethealth(int health){
        this->health = health;
    }

    void setScore(int score){
        this->score = score;
    }

    void setIsAlive(bool alive){
        this->alive = alive;
    }

    void setGun(Gun gun){
        this->gun = gun;
    }

    //getter
    int getAge(){
        return age;
    }

    int gethealth(){
        return health;
    }

    int getScore(){
        return score;
    }

    bool getIsalive(){
        return alive;
    }

    Gun getGun(){
        return gun;
    }

};

int getmaxScore(player a , player b){
    if(a.getScore() > b.getScore()) return a.getScore();
    else return b.getScore();
 
}

int AddAge(player a , player b){
    return a.getAge() + b.getAge();
}

int main(){

    player vipin;//obeject creation
    player vikash;//compile time , static alloction

    player *nitish = new player; // run time , dynamic alloction
   // player nitishObject = *nitish;

    Gun akm;
    akm.ammo = 40;
    akm.damage = 95;
    akm.scope = 55;

    Gun awm;
    awm.ammo = 15;
    awm.damage = 150;
    awm.scope = 8;
    

    vipin.setAge(20);
    vipin.sethealth(100);
    vipin.setScore(90);
    vipin.setIsAlive(true);
    vipin.setGun(awm);


    vikash.setAge(22);
    vikash.sethealth(99);
    vikash.setScore(80);
    vikash.setIsAlive(true);
    vikash.setGun(akm);

    // nitishObject.setScore(40);
    // nitishObject.sethealth(60);
    nitish->setAge(23);
    nitish->sethealth(70);
    nitish->setIsAlive(true);
    


    // cout<<nitishObject.gethealth()<<endl;

    // cout<<nitish->getAge()<<endl;
    // cout<<nitish->gethealth()<<endl;

    

    cout<<AddAge(vipin , vikash)<<endl;

}