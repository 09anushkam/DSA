// Selection Sort O(n²)
// Select Minimum and swap
// Select the minimum no. and put it at its correct position
// 13 46 24 52 20 9

// 9 46 24 52 20 13
// 9 13 24 52 20 46
// 9 13 20 52 24 46
// 9 13 20 24 52 46
// 9 13 20 24 46 52

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

void selectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){ // 1 to 2nd last
        int mini=i;
        for(int j=i;j<=n-1;j++){ // i to last
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        // int temp=arr[mini];
        // arr[mini]=arr[i];
        // arr[i]=temp;
        swap(arr[mini],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    ip(arr,n);
    selectionSort(arr,n);
    op(arr,n);
    return 0;
}