#include<iostream>
#include <limits.h>
using namespace std;

//print sum col wise
void printSum_col(int arr[][3],int n, int m){

    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[j][i];
        }
        cout<<sum <<" "<<endl;
    }
    cout<<endl;
}

//print sum row wise
void printSum_row(int arr[][3],int n, int m){

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        cout<<sum <<" "<<endl;
    }
    cout<<endl;
}

int largestRowSum(int arr[][3],int n,int m){

    int max = INT_MIN;
    int rowIndex = -1;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            rowIndex = i; 
        }  
    }
    cout<<"the maximum sum is : "<<max<<endl;
    return rowIndex;
}


int main(){

    int arr[3][3];

    cout<<"Enter the element : "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"row wise sum : "<<endl;
    printSum_row(arr,3,3);

    cout<<"col wise sum : "<<endl;
    printSum_col(arr,3,3);

    int ans = largestRowSum(arr,3,3);
    cout<<"maximum sum index is : "<<ans;




}