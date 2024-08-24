// Quick Sort
// Pick a pivot and place it in it's correct place in the sorted array
// Smaller on the left,Larger on the right

#include<bits/stdc++.h>
using namespace std;

void ip(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }
}

void op(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
           i++;
        }while(arr[j]>pivot && j>=low+1){
           j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        int pIndex=partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    ip(arr,n);
    quickSort(arr,0,n-1);
    op(arr,n);
    return 0;
}