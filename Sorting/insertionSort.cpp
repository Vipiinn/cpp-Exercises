#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[10];

    cout<<"Enter the element in array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>arr[j+1]){
                //shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
     }


    cout<<"sorted array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    

}
