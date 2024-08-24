// for no. of elements > 10⁶ 
// STL comes in the picture
// Map (sorted/ordered)
// map<int,int>mpp;
// map<key(here number),value(here frequency)>mpp;
// map only stores the elements that are required
// time complexity - O(logn) 

// For unordered map (more preferred because worst case rarely takes place)
// O(1) avg,best case
// O(n) worst case

#include<bits/stdc++.h>
using namespace std;

// For hashing of array using map
// input
// 7 (n)
// 1 2 3 1 3 2 12 
// 5 (q)
// all the numbers
// 1
// 2
// 3
// 4
// 12

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     // take input and precompute
//     map<int,int>mpp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mpp[arr[i]]++;
//     }

//     // precompute
//     // map<int,int>mpp;
//     // for(int i=0;i<n;i++){
//     //     mpp[arr[i]]++;
//     // }

//     // iterate in the map
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         // fetch
//         cout<<mpp[number]<<endl;
//     }
//     return 0;
// }

// For hashing of string using map
// int main(){
//     string s;
//     cin>>s;
//     // take input and precompute
//     map<char,int>mpp;
//     for(int i=0;i<n;i++){
//         mpp[s[i]-'a']++;
//     }
//     // precompute
//     // map<int,int>mpp;
//     // for(int i=0;i<n;i++){
//     //     mpp[arr[i]]++;
//     // }

//     // iterate in the map
//     for(auto it:mpp){
//         cout<<it.first<<"->"<<it.second<<endl;
//     }

//     int q;
//     cin>>q;
//     while(q--){
//         int c;
//         cin>>c;
//         // fetch
//         cout<<mpp[c-'a']<<endl;
//     }
//     return 0;
// }
