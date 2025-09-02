#include<iostream>
#include<limits.h>
using namespace std;

int maxInArray(int *arr , int n , int idx){
    //base case

    if(idx == n){
        return INT_MIN;
    }

    return max(arr[idx] , maxInArray(arr , n , idx+1));
}

int main(){
    int arr[] = {2,4,6,356,5,7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = maxInArray(arr , n , 0);

    cout<<"maximum element in array is -> "<<ans<<endl;

}