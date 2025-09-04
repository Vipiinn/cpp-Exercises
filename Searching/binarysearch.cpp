#include<iostream>
using namespace std;

int found(int arr[],int size,int target){

     int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // u can use also [start + (end - start) / 2] 

    while(start<=end){

        if(target==arr[mid]){
            return mid;
        }
        else if(target<arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }  

        mid = (start + end)/2;

    }
        return -1;    
    
}

int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[20];

   cout<<"Enter the element in the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter data to be searched :"<<endl;
    cin>>target;

   int result = found(arr,n,target);

   if(result!=-1){
    cout<<"element is found at "<<result<<endl;
   }
   else{
    cout<<"element not present in array";
   }

    

    


}