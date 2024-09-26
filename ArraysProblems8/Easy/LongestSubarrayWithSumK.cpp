// Subarray - contiguous sub part of the array

#include<bits/stdc++.h>
using namespace std;

// Brute - Approach 1 - Using 3 loops - TC - O(n³) , SC - O(1)

int longestSubarrayWithSumKBrute1(int arr[],int n,int sum){
    int len=0,s;
    // start index
    for(int i=0;i<n;i++){
        // end index
        for(int j=i;j<n;j++){
            s=0;
            // iterate from start to end all the sub arrays one by one
            for(int k=i;k<=j;k++){
                s+=arr[k];
            }
            if(s==sum){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}

// Brute - Approach 2 - Using two loops - TC - O(n²) , SC - O(1)

int longestSubarrayWithSumKBrute2(int arr[],int n,int sum){
    int len=0,s;
    // start index
    for(int i=0;i<n;i++){
        s=0;
        // end index and also iterate from start to end all the sub arrays one by one
        for(int j=i;j<n;j++){
            s+=arr[j];
            if(s==sum){
                len=max(len,j-i+1);
            }
        }
    }
    return len;
}

// Better Approach - Hashing - TC - O(n*logn) , SC - O(n)
// if unordered map is used then TC - O(n²) is worst case where collisions are taking place else O(n*1)

int longestSubarrayWithSumKBetter(vector<int>arr,long long k){
    int n=arr.size();
    map<long long,int>preSumMap; // <sum,index>
    long long sum=0;
    int maxLength=0;

    for(int i=0;i<n;i++){

        // calculate the sum 
        sum+=arr[i];

        // if sum=k
        if(sum==k){
            maxLength=max(maxLength,i+1); // 2 -> <3,1>
        }
        
        long long rem=sum-k; // eg : rem=9-3 

        // Check remaining is there in map - eg : 6
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem]; // len=5-2 // length of sum (x) - length of rem (k)
            maxLength=max(maxLength,len); // compare previous and new length
        }

        // Adding sum in the map with the index
        if(preSumMap.find(sum)==preSumMap.end()){
            preSumMap[sum]=i; // <sum,i> -> <9,5>
        }
    }

    return maxLength;
}

// Optimal - 2 pointers /Sliding Window - TC - O(2n) , SC - O(1)
// Only for Positives and Zeros

int longestSubarrayWithSumKOptimal(vector<int>arr,long long k){
    int left=0,right=0;
    long long sum=arr[0];
    int maxLen=0;
    int n=arr.size();

    // iterate till right<n
    while(right<n){

        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while(left<=right && sum>k){
            sum-=arr[left];
            left++;
        }

        // if sum = k, update the maxLen
        if(sum==k){
            maxLen=max(maxLen,right-left+1);
        }

        // move right pointer and add it's sum to the subarray ->
        right++;
        // make sure it right is still < n 
        if(right<n){
            sum+=arr[right];
        }
    }
    return maxLen;
}

int main(){
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;
    int x;
    x=longestSubarrayWithSumKBrute1(arr,n,sum);
    cout<<x;
    x=longestSubarrayWithSumKBrute2(arr,n,sum);
    cout<<x;

    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    x=longestSubarrayWithSumKBetter(a, k);
    cout<<x;
    x=longestSubarrayWithSumKOptimal(a, k);
    cout<<x;

    return 0;
}