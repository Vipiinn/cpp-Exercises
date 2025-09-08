#include<iostream>
#include<vector>
using namespace std;

//merge two sorted array function
void merge(vector<int>& a , vector<int>& b , vector<int>& v){
    v.clear(); // Clear v before inserting merged elements

    int i = 0;
    int j = 0;

    while(i<a.size() && j<b.size()){
        if(a[i] <= b[j]){
            v.push_back(a[i]);
            i++;
        }
        else{
            v.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()){
        v.push_back(a[i]);
        i++;
    }
    while(j<b.size()){
        v.push_back(b[j]);
        j++;
    }
}

void mergeSort(vector<int> &v){
    int n = v.size();
    int n1 = n/2;
    int n2 = n - n/2;

    //base case
    if(n == 1) return;
    //creating two empty vector
    vector<int> a(n1);
    vector<int> b(n2);

    //copy pasting elements in  empty vector

    for(int i=0;i<n1;i++){
        a[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        b[i] = v[i+n1];
    }

    mergeSort(a);
    mergeSort(b);

    merge(a,b,v);
4 
    //free memory
	a.clear();
	b.clear();
}

int main(){
    int arr[] = {6,34,5,2,7,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> v(arr,arr+n);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    mergeSort(v);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}