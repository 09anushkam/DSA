// Merge Sort - O(logn)
// Divide and Merge

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

void mergeArrays(int arr[],int low,int mid,int high) {
    int n1=mid-low+1;
    int n2=high-mid;

    int left[n1],right[n2];

    for(int i=0;i<n1;i++){
        left[i]=arr[low+i];
    }
    for(int j=0;j<n2;j++){
        right[j]=arr[mid+1+j];
    }

    int i=0,j=0,k=low;

    while(i<n1 && j<n2){
        if (left[i]<=right[j]) {
            arr[k++]=left[i++];
        } else{
            arr[k++]=right[j++];
        }
    }

    while(i<n1){
        arr[k++]=left[i++];
    }

    while(j<n2){
        arr[k++]=right[j++];
    }
}

void mergeSort(int arr[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    mergeArrays(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    // input and output for dynamic array this step is remaining
    ip(arr,n);
    mergeSort(arr,0,n-1);
    op(arr,n);
    return 0;
}