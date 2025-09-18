#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    
    for(int i=0;i<n;i++){
        for(int j=i;j<i+k-1;j++){
            if(arr[j] < 0){
                v.push_back(arr[j]);
                break;
            } 
        }
    }
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
  
}