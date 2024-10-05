#include<bits/stdc++.h>
using namespace std;

// Variety 1 - n/2 positive and n/2 negative elements

// Brute - TC - O(n) + O(n/2) , SC - O(n)

// vector<int>rearrangeElementsBySignBrute(vector<int>arr,int n){
//     vector<int>pos,neg;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             neg.push_back(arr[i]);
//         }
//         else{
//             pos.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         arr[2*i]=pos[i];
//         arr[2*i+1]=neg[i];
//     }
//     return arr;
// }

// Optimal - TC - O(n) , SC - O(n)

// vector<int>rearrangeElementsBySignOptimal(vector<int>arr,int n){
//     vector<int>ans(n,0);
//     int posIndex=0,negIndex=1;
//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             ans[negIndex]=arr[i];
//             negIndex+=2;
//         }
//         else{
//             ans[posIndex]=arr[i];
//             posIndex+=2;
//         }
//     }
//     return ans;
// }

// Variety 2 - no. of positives and negatives are unequal
// Brute - TC - O(n) + O(n) =  O(2n) , SC - O(n)
// Only brute force will work here

vector<int>rearrangeElementsBySignBruteVar2(vector<int>arr,int n){
    vector<int>pos,neg;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
        else{
            pos.push_back(arr[i]);
        }
    }

    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=neg.size()*2; // n/2(positive)+n/2(negative)=n elements are filled now the remaining elements will be filled
        for(int i=neg.size();i<pos.size();i++){
            arr[index]=pos[i];
            index++;
        }
    }

    else{
        for(int i=0;i<pos.size();i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        int index=pos.size()*2; // n/2(positive)+n/2(negative)=n elements are filled now the remaining elements will be filled
        for(int i=pos.size();i<neg.size();i++){
            arr[index]=neg[i];
            index++;
        }
    }
    return arr;
}

int main(){
    vector<int>arr={3,1,-2,-5,2,-4};
    int n=6;
    // vector<int>ans=rearrangeElementsBySignBrute(arr,n);
    // vector<int>ans=rearrangeElementsBySignOptimal(arr,n);
    vector<int>ans=rearrangeElementsBySignBruteVar2(arr,n);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}