#include<iostream>
using namespace std;

void Display(int *arr , int n , int idx){
    if(idx == n){
        return;
    }
    cout<<arr[idx] <<" ";
    Display(arr , n , idx+1);
}

int main(){
    int arr[] = {3,2,4,7,6,8,97};
    int n = sizeof(arr) / sizeof(arr[0]); // formula to find size of array
    cout<<n;

    Display(arr , n , 0);

}