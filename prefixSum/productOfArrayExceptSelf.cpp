#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    //formation of prefix product except self
    int pre[n];
    pre[0] = 1; // 1st element is always 1
    int p = 1;
    for(int i=1;i<n;i++){
        p *= arr[i-1];
        pre[i] = p;
    }

    //formation of suffix product array except self;
    int suf[n];
    suf[n-1] = 1;
    int prod = 1; //last element is always 1 
    for(int i=n-2;i>=0;i--){
        prod *= arr[i+1];
        suf[i] = prod;
    }

    //resultant array
    for(int i=0;i<n;i++){
        pre[i] = pre[i] * suf[i];
        cout<<pre[i]<<" ";
    }
    
}