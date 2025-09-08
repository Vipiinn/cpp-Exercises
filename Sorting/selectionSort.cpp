#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the arrray :";
    cin>>n;
    int arr[10];

    cout<<"Enter the element in array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    cout<<"sorted array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }

}