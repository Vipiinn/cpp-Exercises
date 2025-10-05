#include<iostream>
using namespace std;

class Student{

public:
    string name;
    int roll_No;
    float marks;

    //constructor
    Student(string n , int r , float m){
        this->name = n;
        this->roll_No = r;
        this->marks = m;

    }
};

void change(Student *s){
    s->name = "nitish";
}

int main(){

    Student *s = new Student("vipin Vishwakarma" , 76 , 96.5);
    
    cout<<s->name<<endl;

    change(s);
    
    cout<<s->name<<endl;



}