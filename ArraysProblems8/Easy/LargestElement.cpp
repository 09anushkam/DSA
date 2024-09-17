#include<bits/stdc++.h>
using namespace std;

// Brute force
// sortAndReturnLastElement
// int sortAndReturnLastElement(vector<int>& arr){
//     sort(arr.begin(),arr.end());
//     return arr.back();
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<sortAndReturnLastElement(arr);
//     return 0;
// }

// Optimal Approach
// int findLargest(int arr[],int n){
//     int max=arr[0];
//     for(int i=0;i<n;i++){
//         if(max<arr[i]){
//             max=arr[i];
//         }
//     }
//     return max;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<findLargest(arr,n);
// }

