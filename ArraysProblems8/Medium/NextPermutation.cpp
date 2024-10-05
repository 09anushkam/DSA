// Brute Force - 
// Generate all permutations in sorted order - recursion
// linear search 
// next index permutation will be the answer

// TC - (n!*n) for generating n permutations
// so we can't go with brute force bcoz if n=15 then n!=10¹²


// Better - Using in-built function of C++ next_permutation()

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     int arr[] = {1,3,2};
//     next_permutation(arr,arr+3);//using in-built function of C++
//     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
//     return 0;
// }


// Optimal - Implementing/Writing code for next_permutation() , TC - O(3n) , SC - O(1) 
// 1. longer prefix match
// breakpoint a[i]<a[i+1]
// 2. find someone who is just greater than a[i] and place that element at the position of a[i]
// 3. try to place remaining numbers after that element in sorted order

// dry run
// example - 2 1 5 4 3 0 0
// after findng i such that a[i]<a[i+1] assign i to index // here it is 1->position(1)
// now find a[i]>a[index] swap(a[i],a[index]) // here 3 and 1
// after swaping 1 and 3 - 2 3 5 4 1 0 0
// reverse elements present after 3 
// next permutation - 2 3 0 0 1 4 5

#include<bits/stdc++.h>
using namespace std;

vector<int>nextPermutation(vector<int>arr){
    
    int n=arr.size();
    int index=-1;

    // finding i and assigning it to index (breakpoint)
    // eg: 1
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i; // 1
            break;
        }
    }

    // edge / base case
    // If break point does not exist
    // 5,4,3,2,1 -> 1,2,3,4,5
    if(index==-1){
        // reverse the array 
        reverse(arr.begin(),arr.end());
        return arr;
    }

    // iterate and find the number which is just greater than arr[index]
    // eg: finding 3 and swaping it with 1
    for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[index]){
            swap(arr[i],arr[index]); // swap(3,1)
            break;
        }
    }

    // reverse the remaining part of array from index+1 to n-1
    reverse( arr.begin()+index+1 , arr.end() );

    return arr;
}

int main(){
    vector<int>arr={2,1,5,4,3,0,0};
    vector<int>ans=nextPermutation(arr);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}
