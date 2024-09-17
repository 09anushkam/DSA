// Quick Sort 
// TC - O(nlogn), SC - O(1)
// Pick a pivot and place it in it's correct place in the sorted array
// then place Smaller on the left and Larger on the right

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
    int i=low; // leftmost element
    int j=high; // rightmost element
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
           i++;
        }while(arr[j]>pivot && j>=low+1){
           j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]); // here, j has crossed i and we are swaping j(which is smaller than pivot) with pivot(leftmost/lowest)
    return j; // partition index
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