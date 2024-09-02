#include<bits/stdc++.h>
using namespace std;

// Hashing -> prestoring and fetching

// For hashing of array using array :
// Earlier O(nq) without hashing {Check whole array for each query(element that we are interested in irrespective of it exists or not)}
// Later O(q) with hashing using array {precompute the count for each element and directly access the count for each query}

// [if n=10⁸] then it takes 1s for the code to get executed
// [if n=10¹⁰] then it takes 100secs(1.5min) for the code to get executed 

// numbers
// max array size -> 10⁷ (globally)
// max array size -> 10⁶ (inside main)

// booleans
// max array size -> 10⁸ (globally)
// max array size -> 10⁷ (inside main)

// Count of all the elements and it will increase the no. of times they are getting repeated
// input
// 5 (n)->size of array
// 1 3 2 1 3 (arr)
// 5 (q)->query (no. of no.s for which u want to check the count)
// no.s for which u want to check the count
// 1 
// 4
// 2
// 3
// 12

// note - if n is the size of array arr then size of array hash should be n+1
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     // precompute
//     int hash[13]={0};
//     for(int i=0;i<n;i++){
//         hash[arr[i]]+=1; // incrementing value at arr[i] using hash[arr[i]] (new arr) where position is arr[i] and value is hash[arr[i]]
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         int number;
//         cin>>number;
//         // fetch
//         cout<<number<<" Appeared "<<hash[number]<<" times "<<endl;
//     }
//     return 0;
// }

// For hashing of string using array :
// Character Hashing
// input
// abcdabehf (s)
// 5 (q)
// characters
// a
// g
// h
// b
// c

// Exclusively for lowercase
// int main(){
//     string s;
//     cin>>s;
//     // precompute
//     int hash[26]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         // fetch
//         cout<<c<<" Appeared "<<hash[c-'a']<<" times "<<endl;
//     }
//     return 0;
// }

// including uppercase
// int main(){
//     string s;
//     cin>>s;
//     // precompute
//     int hash[256]={0};
//     for(int i=0;i<s.size();i++){
//         hash[s[i]]++;
//     }
//     int q;
//     cin>>q;
//     while(q--){
//         char c;
//         cin>>c;
//         // fetch
//         cout<<c<<" Appeared "<<hash[c]<<" times "<<endl;
//     }
//     return 0;
// }