#include<iostream>
using namespace std;

class Cricketer{

public:
    char name;
    int age;
    int noOfTestMatches;
    int avaerageScore;

};

int main(){

    Cricketer dhoni;
    Cricketer virat;

    dhoni.name = 'D';
    dhoni.age = 40;
    dhoni.noOfTestMatches = 200;
    dhoni.avaerageScore = 57;

    virat.name = 'V';
    virat.age = 35;
    virat.noOfTestMatches = 150;
    virat.avaerageScore = 50;

    Cricketer crick[2] = {dhoni , virat};

    for(int i=0;i<2;i++){
        cout<<"details of batsman -> "<< i <<"th"<<endl<<endl;
        cout<<crick[i].name<<endl;
        cout<<crick[i].age<<endl;
        cout<<crick[i].noOfTestMatches<<endl;
        cout<<crick[i].avaerageScore<<endl;
    }

}