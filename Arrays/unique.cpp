#include<iostream>
using namespace  std;

int findunique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;

}

int main(){
    int n;
    cout<<"Enter the size of the element :";
    cin>>n;
    int arr[10];
    cout<<"Enter the element of the array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"unique element is : "<<findunique(arr,n);


}
