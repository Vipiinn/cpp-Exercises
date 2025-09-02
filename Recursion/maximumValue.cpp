#include<iostream>
#include<limits.h>
using namespace std;


void maxi(int *arr  ,int n , int idx , int max){

    //base case 
    if(idx == n){
        cout<<"maximum value of the array is -> "<<max <<endl;
        return ;
    }

    if(max < arr[idx]){
        max = arr[idx];
    }

    maxi(arr , n , idx+1 , max);
}

int main(){
    int arr[] = {5,4,2,6,7,9,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxi(arr , n , 0 , INT_MIN);
}