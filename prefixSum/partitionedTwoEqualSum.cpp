#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,10};
    int n = sizeof(arr) / sizeof(arr[0]);

    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }

    //checking ispossible or not 
    int idx = -1;
    for(int i=0;i<n;i++){
        if(2*arr[i] == arr[n-1]){
            idx = i;
        }
    }
    if(idx != -1) cout<<"yes it can be partitioned after idx -> "<<idx<<endl;
    else cout<<"it cannot partitioned";
}