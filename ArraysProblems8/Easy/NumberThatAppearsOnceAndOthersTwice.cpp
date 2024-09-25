#include<bits/stdc++.h>
using namespace std;

// Brute - Linear Search - TC - O(n²) , SC - O(1)
int numberThatAppearsOnceBrute(int arr[],int n){
    int num,count;
    for(int i=0;i<n;i++){
        num=arr[i]; // pick up a element
        count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==num){
                count++; // count it's occurence
            }
        }
        if(count==1) return num;
    }
}

// Better - Hashing - TC - O(3n) , SC - O(maxi)
int numberThatAppearsOnceBetter1(int arr[],int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]); // traverse and find the maximum element
    }
    int hash[maxi]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++; // count occurence for every element
    }
    for(int i=0;i<n;i++){
        if(hash[arr[i]]==1)
            return arr[i]; // traverse and find which element has occurence=1 and return it
    }
}

// Better - Hashing using the map data structure - TC - O(nlogm)+O(m) , SC - O(n)
// Unordered map - worst case - O(n²) ,
// Ordered map - worst case - O(nlogm) ,
// m=(n/2+1) 
int numberThatAppearsOnceBetter2(vector<int>&arr){
    int n=arr.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++; // add frequencies for key in the map
    }
    for(auto it:mpp){
        if(it.second==1){
            return it.first; // will return the one with the frequency=1
        }
    }
    return -1;
}

// Optimal - Using XOR - TC - O(n) , SC - O(1)
int numberThatAppearsOnceOptimal(int arr[],int n){
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    return XOR;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=numberThatAppearsOnceBrute(arr,n);
    int k=numberThatAppearsOnceBetter1(arr,n);
    int k=numberThatAppearsOnceOptimal(arr,n);

    vector<int> arr1 = {4, 1, 2, 1, 2};
    int k=numberThatAppearsOnceBetter2(arr1);

    cout<<k;
    return 0;
}