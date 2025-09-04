#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int key){

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    
    int ans = -1;

    while(start<=end){

        if(key == arr[mid]){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastocc(int arr[],int n,int key){

    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    
    int ans = -1;

    while(start<=end){

        if(key == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start +(end-start)/2;
    }
    return ans;
}


int main(){

int arr[9] = {1,2,3,3,3,3,3,4,5};

cout<<"first occurrence of 3 is at : "<<firstocc(arr,9,3)<<endl;

cout<<"last occurrence of 3 is at : "<<lastocc(arr,9,3);

    return 0;
}