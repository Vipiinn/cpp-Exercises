#include<iostream>
using namespace std;

class player{//class is a blueprint
    public:
    int score;
    int health;

    void showhealth(){
        cout<<"Health is -> "<<health<<endl;
    }

    void showScore(){
        cout<<"score is -> "<<score<<endl;
    }
};
        
int main(){

    player vipin; //player ia a object
    vipin.score = 90;
    vipin.health = 100;
    
    cout<<vipin.score<<endl;
    cout<<vipin.health<<endl;
    cout<<endl;

    vipin.showhealth();
    vipin.showScore();

}