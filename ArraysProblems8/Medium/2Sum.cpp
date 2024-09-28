// 2 varities - if array and target value is given

// 1 - any 2 elements from array can sum up and give target value ? yes/no
// 2 - find at what position those 2 elements are present which sum up to give target value

#include<bits/stdc++.h>
using namespace std;

// Brute - add an element to every other element and check sum - TC - O(n²) , SC - O(1)

vector<int>findTheTwoNumbersBrute(vector<int>& arr, int target){
    vector<int>ans;
    int n=arr.size();
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans; // (for variety two)
                // return "yes"; // (for variety one)
            }
        }
    }
    return {-1,-1}; // (for variety two)
    // return "no"; // (for variety one)
}

// Better - Hashing - TC - O(n*logn) , SC - O(n)
// best case - TC -  O(n)
// worst case - TC -  O(n²)

vector<int>findTheTwoNumbersBetter(vector<int>& arr,int target){
    unordered_map<int,int>mpp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int num=arr[i]; // 8
        int moreNeeded=target-num; // 6
        // searching if complementary of 8 for 14 i.e. 6 is present in map or not
        if(mpp.find(moreNeeded)!=mpp.end()){
            return {mpp[moreNeeded],i}; // returning indices for both the numbers eg : index of {6,8} -> {1,3} // (for variety two)
            // return "yes"; // (for variety one)
        }
        mpp[num]=i; // we are storing index for each no.
    }
    return {-1,-1}; // (for variety two)
    // return "no"; // (for variety one)
}

// Optimal - 2 Pointers - TC - O(n*logn) + O(n) , SC - O(1)
// Applicable to variety one only

string findTheTwoNumbersOptimal(vector<int>& arr,int target){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int left=0,right=n-1;
    for(int i=0;i<n;i++){
        int sum=arr[left]+arr[right];
        if(sum==target){
            return "Yes";
        }
        else if(sum<target){
            left++;
        } else{
            right--;
        }
    }
    return "No";
}

int main(){
    vector<int>arr={2,6,5,8,11};
    int target=14;
    // vector<int>ans=findTheTwoNumbersBrute(arr,target);
    vector<int>ans=findTheTwoNumbersBetter(arr,target);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    cout<<findTheTwoNumbersOptimal(arr,target);
    return 0;
}