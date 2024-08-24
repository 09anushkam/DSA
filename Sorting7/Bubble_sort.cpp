// Bubble Sort Worst case - O(n²) , best case - O(n) (already ascending order)
// Compare 2 no.s and Push the max to the last by adjacent swaps
// 13 46 24 52 20 9

// 52 pushed to last position
// 13 46 24 52 20 9
// 13 24 46 52 20 9
// 13 24 46 52 20 9
// 13 24 46 20 52 9
// 13 24 46 20 9 52

// 46 pushed to it's position
// 13 24 46 20 9 52
// 13 24 46 20 9 52
// 13 24 20 46 9 52
// 13 24 20 9 46 52

// 24 pushed to it's position
// 13 24 20 9 46 52
// 13 20 24 9 46 52
// 13 20 9 24 46 52
// 13 20 9 24 46 52

// 20 pushed to it's position
// 13 20 9 24 46 52
// 13 9 20 24 46 52

// 13 pushed to it's position
// 13 9 20 24 46 52
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

void bubbleSort(int arr[],int n){
    for(int i=n-1;i>=0;i--){ // 0-last index
    int didswap=0;
        for(int j=0;j<=i-1;j++){  // 1st to updated last index (j<=i-1) -> (j<=n-2) (till 2nd last element. Otherwise if we are going till last element, the last element will compare itself with garbage value as no one is present on it's next position and this will give us run time error)
            if(arr[j]>arr[j+1]){
                // int temp=arr[j+1];
                // arr[j+1]=arr[j];
                // arr[j]=temp;
                swap(arr[j],arr[j+1]);
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
        cout<<"runs\n";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    ip(arr,n);
    bubbleSort(arr,n);
    op(arr,n);
    return 0;
}