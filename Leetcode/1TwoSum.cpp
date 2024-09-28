// Brute Force 

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int>ans;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 if(nums[i]+nums[j]==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans;
//                 }
//             }
//         }
//         return {-1,-1};
//     }
// };

// Better/Optimal

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         map<int,int>mpp;
//         int n=nums.size();
//         for(int i=0;i<n;i++){
//             int num=nums[i];
//             int moreNeeded=target-num;
//             if(mpp.find(moreNeeded)!=mpp.end()){
//                 return {mpp[moreNeeded],i};
//             }
//             mpp[num]=i;
//         }
//         return{-1,-1};
//     }
// };