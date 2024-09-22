// Union of 2 sorted arrays

#include<bits/stdc++.h>
using namespace std;

// Brute Force - TC - O((m+n)log(m+n)), SC - O(m+n) space of Union array else O(1)
// vector<int>FindUnionBrute(int arr1[],int arr2[],int n,int m){
//     map<int,int>freq; // map
//     vector<int>Union;

//     for(int i=0;i<n;i++){
//         freq[arr1[i]]++; // add in the map
//     }
//     for(int i=0;i<m;i++){
//         freq[arr2[i]]++; // add in the map
//     }
//     for(auto &it:freq){
//         Union.push_back(it.first); // add keys of map in the vector
//     }
//     return Union;
// }


// Better - TC - O((m+n)log(m+n)) , SC - O(m+n)space of Union array else O(1)

// vector<int>FindUnionBetter(int arr1[],int arr2[],int n,int m){
//     set<int>s;
//     vector<int>Union;
//     for(int i=0;i<n;i++){
//         s.insert(arr1[i]); // add in the set
//     }
//     for(int i=0;i<m;i++){
//         s.insert(arr2[i]); // add in the set
//     }
//     for(auto &it:s){
//         Union.push_back(it); // add set elements in the vector
//     }
//     return Union;
// }

// Optimal - TC - O(m+n) , SC - O(m+n)space of Union array else O(1)
// 53:35
vector<int>FindUnionOptimal(int arr1[], int arr2[], int n, int m){
    vector<int>Union;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            if(Union.size()==0 || Union.back()!=arr1[i]){ // use Union.size()==0 before else u will get error
                Union.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(Union.size()==0 || Union.back()!=arr2[j]){ 
                Union.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(Union.back()!=arr1[i]){
            Union.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(Union.back()!=arr2[j]){
            Union.push_back(arr2[j]);
        }
        j++;
    }
    return Union;
}

int main(){
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    // vector<int>Union=FindUnionBrute(arr1,arr2,n,m);
    // vector<int>Union=FindUnionBetter(arr1,arr2,n,m);
    vector<int>Union=FindUnionOptimal(arr1,arr2,n,m);
    for(auto &it:Union){
        cout<<it<<" ";
    }
    return 0;
}