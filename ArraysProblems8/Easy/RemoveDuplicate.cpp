#include<bits/stdc++.h>
using namespace std;

// Note - This is remove duplicates from sorted array

// Unique Elements - Set Datastructure
// Brute Force - TC - O(nlogn+n) , SC - O(n) , Approach : array -> Set DS (takes unique elements) -> array

// int removeDuplicates(int arr[],int n){
//     set<int>set;
//     for(int i=0;i<n;i++){
//         set.insert(arr[i]); // putting array elements in set
//     }
//     int k=set.size();
//     int j=0;
//     for(auto x:set){
//         arr[j]=x; // putting elements back into array from set
//         j++;
//     }
//     return k; // size of new array after removing duplicates
// }

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=removeDuplicates(arr,n);
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// 38:40
// Optimal - TC - O(n) , SC - O(1) , Approach : Two Pointers

// int removeDuplicates(int arr[],int n){
//     int i=0;
//     for(int j=1;j<n;j++){
//         if(arr[j]!=arr[i]){
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return (i+1); // size of new array after removing duplicates
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=removeDuplicates(arr,n);
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
