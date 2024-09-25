#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n), SC - O(1)

int findMaxConsecutiveOnesBrute(int arr[],int n){
    int maxi=0,count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
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
    int k=findMaxConsecutiveOnesBrute(arr,n);
    cout<<k;
    return 0;
}


