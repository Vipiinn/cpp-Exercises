#include<iostream>
using namespace std;

//to convert upper case into lower case

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPlaindrome(char a[], int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){
        if(toLowerCase (a[s])!=toLowerCase (a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


void reverse(char name[] , int n){
    int s = 0;
    int e = n-1;

    while(s < e){
        swap(name[s++], name[e--]);
    }
}

int getlenght(char name[]){
    int count = 0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];

    cout<<"Enter your name : ";
    cin>>name;

    cout<<"your name is : "<<name<<endl;

    int len = getlenght(name);
    cout<<"lenght is : "<<len<<endl;

    reverse(name,len);

    cout<<"after reverse your name is : "<<name<<endl;

    cout<<"palindrome or not : "<<checkPlaindrome(name,len)<<endl;

    cout<<"CHARACETER is : "<<toLowerCase('b') <<endl;
    cout<<"CHARACETER is : "<<toLowerCase('D') <<endl;
    

}




