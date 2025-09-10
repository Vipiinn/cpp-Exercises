#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter row -> ";
    cin>>n;

    cout<<"Enter column -> ";
    cin>>m;

    //creating a 2D array
    int **arr =  new int *[n];

    for(int i=0;i<n;i++){
        arr[i] = new int[m];
    }
    

    //taking input

    cout<<"Enter element -> "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //print
    cout<<"output -> "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //releasing memory
     for(int i=0;i<n;i++){
        delete [] arr[i];
    }

    delete []arr;

}