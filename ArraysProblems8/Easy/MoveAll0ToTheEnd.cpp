#include<bits/stdc++.h>
using namespace std;

// Brute Force - TC - O(2n), SC - O(non-zero no.s)

// vector<int>moveAll0ToTheEndBrute(vector<int>arr,int n){
//     vector<int>temp;
//     for(int i=0;i<n;i++){ // put all non-zero no.s in the temporary array
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     int tempSize=temp.size();
//     for(int i=0;i<tempSize;i++){ // put all the non-zero no.s back in the original array
//         arr[i]=temp[i];
//     }
//     for(int i=tempSize;i<n;i++){ // fill the remaining last positions with zero
//         arr[i]=0;
//     }
//     return arr;
// }

// Optimal - 2 Pointer Approach - TC - O(n) , SC - O(1)

// vector<int>moveAll0ToTheEndOptimal(vector<int>arr,int n){
//     int j=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){ // finding the first zero in the array
//             j=i;
//             break;
//         }
//     }
//     if(j==-1) return arr;
//     for(int i=j+1;i<n;i++){ // note - loop starts from j+1
//         if(arr[i]!=0){
//             swap(arr[i],arr[j]); // if arr[i] is non-zero swap it with arr[j]
//             j++;
//         }
//     }
//     return arr;
// }

// int main(){
//     vector<int>arr={1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
//     int n=10;
//     // vector<int>ans=moveAll0ToTheEndBrute(arr,n);
//     vector<int>ans=moveAll0ToTheEndOptimal(arr,n);
//     for(auto &it:ans){
//         cout<<it<<" ";
//     }
//     return 0;
// }