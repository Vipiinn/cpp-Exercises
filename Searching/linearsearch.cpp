#include<iostream>
using namespace std;

bool search(int arr[],int size,int data){

    for(int i=0;i<size;i++){
        if(arr[i] == data){
            return 1;
        }
    }
        return 0;
}

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,11};

    cout<<"Enter the element to be searched :"<<endl;
    int data;
    cin>>data;

    bool found = search(arr,10,data);

    if(found){
        cout<<"data is present "<<endl;
    }
    else{
        cout<<"data is not present "<<endl;
    }


}