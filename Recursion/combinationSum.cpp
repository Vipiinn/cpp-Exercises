#include<iostream>
#include<vector>
using namespace std;

void combinationSum(vector<int> v , int arr[] , int target , int n , int idx){

    //base case
    if(target == 0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }

    if(target < 0) return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combinationSum(v,arr,target-arr[i],n , i);
        v.pop_back();
    }
}

int main(){
    int arr[] = {2,3,5};
    int target = 8;
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v;

    combinationSum(v , arr , target , n , 0);
}