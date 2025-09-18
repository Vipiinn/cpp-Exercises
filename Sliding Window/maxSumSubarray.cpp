#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[] = {7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    int idx = 0;
    int maxSum = INT_MIN;
    int sum = 0;
    
    for(int i=0;i<k;i++){
        sum +=arr[i];
    }
    maxSum = sum;
    //SLIDING WINDOW ALGORITHM
    int i = 1;
    int j = k;

    while(j < n){
        sum = sum + arr[j] - arr[i-1];
        if(sum > maxSum){
            maxSum = sum;
            idx = i;
        }
        i++;
        j++;  
    }

    cout<<"maximum sum of subarray is -> "<<maxSum<<endl;
    cout<<"from idx -> "<<idx;

}