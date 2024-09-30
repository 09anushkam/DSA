#include<bits/stdc++.h>
using namespace std;

// Brute - Sort - O(nlogn)

// Better - count 0's, 1's and 2's then fill the array with 0,1,2 using those count variables - TC - O(2n) , SC - O(3)

// void sort0s1s2sBetter(int arr[],int n){
//     int count0=0,count1=0,count2=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0)
//         count0++;
//         else if(arr[i]==1)
//         count1++;
//         else 
//         count2++;
//     }
//     for(int i=0;i<count0;i++){
//         arr[i]=0;
//     }
//     for(int i=count0;i<count0+count1;i++){
//         arr[i]=1;
//     }
//     for(int i=count0+count1;i<n;i++){
//         arr[i]=2;
//     }
// }

// Optimal - Dutch National Flag - TC - O(n) , SC - O(1)

// low , mid , high
// 0 -> low-1 : 0's
// low -> mid-1 : 1's
// mid -> high : unsorted area
// high+1 -> n-1 : 2's

void sort0s1s2sOptimal(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1)
        mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

// example array
// 0 1 2 0 1 2 1 2 0 0 0 1

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // sort0s1s2sBetter(arr,n);
    sort0s1s2sOptimal(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}