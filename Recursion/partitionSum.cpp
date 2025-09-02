#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i=1;i<n;i++){
        //prefix array
        arr[i] = arr[i] + arr[i-1];
    }
    
    //check 
    bool flag = false;
    for(int i=1;i<n;i++){
        if(2 * arr[i] == arr[n-1]){
            flag = true;
            break;
        }
    }
    if(flag == true) cout<<"it can be partitioned";
    else cout<<"can not be partitioned";
}