#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[6] = {1,2,3,3,5,6};
    int brr[5] = {7,3,3,1,5};

    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
                arr[j] = INT_MIN;
                  break;
            }
        }
    }
}