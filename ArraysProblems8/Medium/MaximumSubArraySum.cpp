#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n³) , SC - O(1)

int maxSubarraySumBrute(int arr[],int n){
    int sum,maxi=INT_MIN;
    // start index
    for(int i=0;i<n;i++){
        // last index
        for(int j=i;j<n;j++){
            sum=0;
            // traverse
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            // update maximum
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}

// Better - TC - O(n²) , SC - O(1)

int maxSubarraySumBetter(int arr[],int n){
    int sum,maxi=INT_MIN;
    // start index
    for(int i=0;i<n;i++){
        sum=0;
        // last index and traverse 
        for(int j=i;j<n;j++){
            sum+=arr[j];
            maxi=max(sum,maxi);
        }
    }
    return maxi;
}

// Optimal - Kadane's Algorithm - TC - O(n) , SC - O(1)
// if sum<0 then reset sum to 0 otherwise keep adding and comparing to maximum

int maxSubarraySumOptimal(int arr[],int n){
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if (sum > maxi) {
            maxi = sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySumBrute(arr,n)<<endl;
    cout<<maxSubarraySumBetter(arr,n)<<endl;
    cout<<maxSubarraySumOptimal(arr,n)<<endl;
    return 0;
}