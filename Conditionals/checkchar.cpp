#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter any character :";
cin>>ch;
if(ch>='a' && ch<='z'){
    cout<<"this is lowercase";
}
else if(ch>='A' && ch<='Z'){
    cout<<"this is uppercase";
}
else{
    cout<<"this is numeric";
}

}