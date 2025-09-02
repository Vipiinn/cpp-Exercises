#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printingArray(int arr[],int size){
    cout<<"reverse of the array is :";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6] = {2,5,3,4,-6,8};
    int brr[5] = {0,1,2,3,4};

    reverse(arr,6);
    reverse(brr,5);

    printingArray(arr,6);
    printingArray(brr,5);



}