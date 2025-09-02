#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int> ans , int arr[] ,int size, int idx){
    
    //base case
    if(idx==size){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    //ye left call ke liye hai
    subset(ans,arr,size,idx+1);
    
    if(ans.size() == 0 || arr[idx-1] ==ans[ans.size()-1]){
        ans.push_back(arr[idx]);
        subset(ans,arr,size,idx+1);
    }  
}


int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    
    subset(v, arr,n , 0);
      
}