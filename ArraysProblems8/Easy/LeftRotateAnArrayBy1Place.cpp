#include<bits/stdc++.h>
using namespace std;

// example : 
// 6
// 7 3 5 2 4 9
// O/P - 3 5 2 4 9 7
// TC- O(n), SC- O(1)

void leftRotateBy1Place(int arr[],int n){
    int temp=arr[0]; // 1.store 1st element in temp variable
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i]; // 2.shift all the element towards one index less / left
    }
    arr[n-1]=temp; // 3.replace last element by temp variable which holds first element
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftRotateBy1Place(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}