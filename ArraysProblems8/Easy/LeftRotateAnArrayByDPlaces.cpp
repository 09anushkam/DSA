#include<bits/stdc++.h>
using namespace std;

// Brute force - TC - O(d)+O(n-d)+O(d)=O(n+d) , SC - O(d)

// example
// 10
// 7 8 9 10 1 2 3 4 5 6
// 4
// O/P - 1 2 3 4 5 6 7 8 9 10

// void leftRotateByDPlacesBrute(int arr[],int n,int d){
//     d=d%n; // to avoid unnecessary multiple rotations
//     int temp[d];
//     for(int i=0;i<d;i++){
//         temp[i]=arr[i]; // 1. put starting d elements in temporary array
//     }
//     for(int i=d;i<n;i++){
//         arr[i-d]=arr[i]; // 2. shifting all the elements by i-d position in the array towards left after d elements
//         // arr[0]<-arr[4]
//         // arr[1]<-arr[5] // just for reference
//     }
//     // int j=0;
//     for(int i=n-d;i<n;i++){
//         // arr[i]=temp[j]; // 3. putting back those temporary elements at the end of the array one by one
//         // j++;
//         arr[i]=temp[i-(n-d)]; // alternative of above 2 lines
//     }
// }

// Optimal - TC - O(d)+O(n-d)+O(n)=O(2n) , SC - O(1)

// example
// 10
// 7 8 9 10 1 2 3 4 5 6
// 4
// intermediate - 10 9 8 7 6 5 4 3 2 1 ( half reverse arrays )
// O/P - 1 2 3 4 5 6 7 8 9 10 ( final reversed array )

// void reverse(int arr[],int start,int end){
//     while(start<=end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
// }

// int leftRotateByDPlacesOptimal(int arr[],int n,int d){
//     reverse(arr,0,d-1); // reversing first half of the array
//     reverse(arr,d,n-1); // reversing 2nd half of the array
//     reverse(arr,0,n-1); // now reversing the complete array altogether
// }

// int main(){
//     int n,d;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cin>>d;
//     // leftRotateByDPlacesBrute(arr,n,d);
//     leftRotateByDPlacesOptimal(arr,n,d);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

