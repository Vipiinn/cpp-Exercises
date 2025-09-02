#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    int start = 0;
    int end = 1;
    while(start<size-1){
        swap(arr[start],arr[end]);
        start = start + 2;
        end = end + 2;
    }
}

void Arrayprinting(int arr[],int size){
    cout<<"answer is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main(){
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {23,4,56,78,44};

    swapAlternate(arr,6);
    swapAlternate(brr,5);
    

    Arrayprinting(arr,6);
    Arrayprinting(brr,5);
}