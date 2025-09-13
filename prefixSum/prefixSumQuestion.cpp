#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,5,3,2,7,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pre[n];
    pre[0] = arr[0];

    for(int i=1;i<n;i++){
        pre[i] = arr[i] + pre[i-1];
    }

    cout<<"printing prefix array -> "<<endl;
    for(int i=0;i<n;i++){
        cout<<pre[i]<<" ";
    }
}