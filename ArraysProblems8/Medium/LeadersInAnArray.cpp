// Leaders - Everything in the right should be smaller

#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n²) , SC - O(n) 

vector<int>leadersInAnArrayBrute(vector<int>& arr){
    int n=arr.size();
    bool leader=false;
    vector<int>ans;
    for(int i=0;i<n;i++){
        leader=true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader=false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

// Optimal - TC - O(n) , SC - O(n) 

vector<int>leadersInAnArrayOptimal(vector<int>& arr){
    vector<int>ans;
    int n=arr.size();
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }

    // sort(ans.begin(),ans.end());
    // or
    // reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    vector<int>arr={10,22,12,3,0,6};
    vector<int>ans1=leadersInAnArrayBrute(arr);
    vector<int>ans2=leadersInAnArrayOptimal(arr);
    for(auto it:ans1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:ans2){
        cout<<it<<" ";
    }
    return 0;
}
