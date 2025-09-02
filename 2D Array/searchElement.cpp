#include<iostream>
using namespace std;

bool isFound(int arr[][3] ,int target , int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    
    int arr[3][3];

    cout<<"Enter elements : "<<endl;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }

    int target;
    cout<<"Enter element to search : ";
    cin>>target;

    if(isFound(arr,target,3,3)){
        cout<<"element is found ";
    }
    else{
        cout<<"element is not found ";
    }

}