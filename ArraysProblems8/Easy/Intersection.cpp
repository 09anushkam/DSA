#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n*m) , SC - O(m)

vector<int>FindIntersectionBrute(int arr1[],int arr2[],int n,int m){
    vector<int>ans;
    int vis[m]={0}; // for counting visits of arr2
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j] && vis[j]==0){ // if any element is common in both arrays and we haven't visited it yet
                ans.push_back(arr1[i]);
                vis[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]) break;
        }
    }
    return ans;
}

// Optimal - SOrted array is needed , TC - O(n+m) , SC - O(1)

vector<int>FindIntersectionOptimal(int arr1[],int arr2[],int n,int m){
    vector<int>ans;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    int n = 8, m = 7;
    int arr1[] = {1, 2, 2, 3, 3, 4, 5, 6};
    int arr2[] = {2, 3, 3, 5, 6, 6, 7};
    // vector<int>Intersection=FindIntersectionBrute(arr1,arr2,n,m);
    vector<int>Intersection=FindIntersectionOptimal(arr1,arr2,n,m);
    for(auto &it:Intersection){
        cout<<it<<" ";
    }
    return 0;
}