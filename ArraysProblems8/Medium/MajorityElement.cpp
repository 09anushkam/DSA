#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n²) , SC - O(1)

int majorityElementBrute(int arr[],int n){
    for(int i=0;i<n;i++){
        int cnt=0; // note this should be used inside the loop for reseting count
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                cnt++;
            }
            
        }
        if(cnt>n/2){
                return arr[i];
            }
    }
    return -1;
}

// Better - Hashing - TC - O(nlogn)+O(n) , SC - O(n)
// ordered map

int majorityElementBetter(int arr[],int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
}

// Optimal - Moore's Voting Algorithm - TC - O(2n) , SC - O(1)

int majorityElementOptimal(int arr[],int n){

    //applying the algorithm:
    int cnt=0,el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=arr[i];
            cnt=1;
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    //checking if the stored element
    // is the majority element:
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(el==arr[i]){
            cnt1++;
        }
    }

    if(cnt1>n/2){
        return el;
    }

    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElementBrute(arr,n)<<endl;
    cout<<majorityElementBetter(arr,n)<<endl;
    cout<<majorityElementOptimal(arr,n)<<endl;
    return 0;
}