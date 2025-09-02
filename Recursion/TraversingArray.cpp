#include<iostream>
using namespace std;

void printing(int *arr , int n){
    if(n < 0){
        return;
    }

    printing(arr , n-1);

    cout<<arr[n]<<" ";
}

int main(){
    int arr[7] = {2,1,3,4,5,68,7};

    printing(arr , 6);
}