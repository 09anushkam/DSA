// Insertion Sort worst case - O(n²) , Best case - O(n)
// Takes an element and places it in it's correct position
// 6 5 4 3 2
// 5 4 3 2 6
// 4 3 2 5 6
// 3 2 4 5 6
// 2 3 4 5 6


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

void insertionSort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){  // 0>1 swap
            // int temp=arr[j-1];
            // arr[j-1]=arr[j];
            // arr[j]=temp;
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    ip(arr,n);
    insertionSort(arr,n);
    op(arr,n);
    return 0;
}