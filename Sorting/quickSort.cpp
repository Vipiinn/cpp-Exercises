#include<iostream>
using namespace std;

int partition(int *arr , int st , int end){

    int pivot = arr[st];

    int count = 0;
//ye pivot ke right index ko count karega 
    for(int i=st+1;i<end;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
//pivot apne right place pe pohch chuka hai
    int pivotIndex = st + count;
    swap(arr[pivotIndex] , arr[st]);


    int i = st , j = end;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++] , arr[j--]);
        }
    }
    return pivotIndex;

}

void quickSort(int *arr , int st , int end){

    //base case
    if(st >= end){
        return ;
    }

    //partition(pivot ka right index return karega )
    int p = partition(arr , st , end);

    //left part sort karega
    quickSort(arr , st , p-1);

    //right part sort karega
    quickSort(arr , p+1 , end);
}

int main(){
    
    int arr[5] = {2,4,1,6,9};
    int n = 5;

    quickSort(arr,0,n-1);

    cout<<"printing sorted arr -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}