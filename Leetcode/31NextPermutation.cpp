// Better

// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//         next_permutation(nums.begin(),nums.end());
//     }
// };

// Optimal 

// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int index=-1;
//         int n=nums.size();

//         // find i(breakpoint) and asign it to index
//         for(int i=n-2;i>=0;i--){
//             if(nums[i]<nums[i+1]){
//                 index=i;
//                 break;
//             }
//         }

//         // base case
//         if(index==-1){
//             reverse(nums.begin(),nums.end());
//             return;
//             // return nums;
//         }

//         // find find the number which is just greater than arr[index] swap it with arr[index]
//         for(int i=n-1;i>=0;i--){
//             if(nums[i]>nums[index]){
//                 swap(nums[index],nums[i]);
//                 break;
//             }
//         }

//         // reverse remaining part
//         reverse(nums.begin()+index+1,nums.end());
//         // return nums;
//     }
// };