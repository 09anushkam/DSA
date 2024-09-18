// Second Largest Element in an array

#include<bits/stdc++.h>
using namespace std;

// Brute Force - O(nlogn+n)

// void getLargestByBrute(int arr[],int n){
//     int secondLargest=INT_MIN;
//     if(n==0||n==1){
//         cout<<"no second largest element found";
//     }
//     else{
//         sort(arr,arr+n); //logic1
//         for(int i=n-2;i>=0;i--){
//             if(arr[n-1]!=arr[i]){ //logic2
//                 secondLargest=i;
//                 break; // v.v.imp becoz after sorting `the first element which is dissimilar to last element` is found which is our second largest element then just break the loop
//             }
//         }
//         cout<<secondLargest<<endl; //position
//         cout<<arr[secondLargest]; //element
//     }
// }

// Better - O(2n)

// void getLargestByBetter(int arr[],int n){
//     int largest=arr[0],secondLargest=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){ //logic1
//             largest=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>secondLargest && arr[i]!=largest){ //logic2
//             secondLargest=arr[i];
//         }
//     }
//     cout<<secondLargest;
// }

// Optimal - O(n)

// Second Smallest
// void getSmallestByOptimal(int arr[],int n){
//     int smallest=arr[0],secondSmallest=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(arr[i]<smallest){ //logic1
//             secondSmallest=smallest;
//             smallest=arr[i];
//         }
//         else if(arr[i]!=smallest && arr[i]<secondSmallest){ //logic2
//             secondSmallest=arr[i];
//         }
//     }
//     cout<<secondSmallest;
// }

// Second Largest
// void getLargestByOptimal(int arr[],int n){
//     int largest=arr[0],secondLargest=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){ //logic1
//             secondLargest=largest;
//             largest=arr[i];
//         }
//         else if(arr[i]<largest && arr[i]>secondLargest){ //logic2
//             secondLargest=arr[i];
//         }
//     }
//     cout<<secondLargest;
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // getLargestByBrute(arr,n);
//     // getLargestByBetter(arr,n);
//     // getSmallestByOptimal(arr,n);
//     // getLargestByOptimal(arr,n);
//     return 0;
// }