#include<bits/stdc++.h>
using namespace std;

// Brute - Linear Search for all the numbers from 1 to n - TC - O(n*n) , SC - O(1)

int findMissingNumberBrute(int arr[],int n){
    int flag;
    for(int i=1;i<=n;i++){ // all the no.s from 1 to n
        flag=0;
        for(int j=0;j<n-1;j++){ // size=n-1 bcoz we assume one is missing
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
    return -1;
}

// Better - Hashing - TC - O(2n) , SC - O(n)

int findMissingNumberBetter(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]=1;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

// Optimal - Sum , XOR - TC - O(n) , SC - O(1)
// XOR is slightly better
// incase of bigger numbers like 10⁵, sum∼10¹⁰
// in that case u have to use long datatype

int findMissingNumberOptimalSum(int arr[],int n){
    int sum=n*(n+1)/2,s2=0;
    for(int i=0;i<n-1;i++){
        s2+=arr[i];
    }
    return (sum-s2);
}

// XOR logic
// same^same=0
// same^different=different

// XOR1=1^2^3^4^5
// XOR2=1^2^4^5
// XOR1^XOR2->3

int findMissingNumberOptimalXOR(int arr[],int n){
    int XOR1=0,XOR2=0;

    // for(int i=1;i<=n;i++){
    //     XOR1=XOR1^i;
    // }
    // for(int i=0;i<n-1;i++){
    //     XOR2=XOR2^arr[i];
    // }

    // // or
    int n=n-1;
    for(int i=0;i<n;i++){
        XOR2=XOR2^arr[i];
        XOR1=XOR1^(i+1);
    }
    XOR1=XOR1^n;
    
    return XOR1^XOR2;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    // cout<<findMissingNumberBrute(arr,n)<<endl;
    // cout<<findMissingNumberBetter(arr,n)<<endl;
    cout<<findMissingNumberOptimalSum(arr,n)<<endl;
    cout<<findMissingNumberOptimalXOR(arr,n);
    return 0;
}