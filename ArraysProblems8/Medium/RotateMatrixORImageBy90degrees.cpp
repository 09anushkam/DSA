#include<bits/stdc++.h>
using namespace std;

// Brute force - TC - O(n*n) , SC - O(n*n)

// [i][j] -> [j][n-1-i]
// first row -> last column
// second row -> second last column
// third row -> third last column 
// fourth row -> fourth last column

vector<vector<int>>rotateMatrixBy90Brute(vector<vector<int>>& arr, int n){
    vector<vector<int>>rotated(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            rotated[j][n-1-i]=arr[i][j];
        }
    }
    return rotated;
}

// Optimal TC - O(n/2*n/2)+O(n*n/2) , SC - O(1)

// transpose and then reverse every row
// first column -> first row but in reverse order
// second column -> second row but in reverse order
// third column -> third row but in reverse order
// fourth column -> fouth row but in reverse order


vector<vector<int>>rotateMatrixBy90Optimal(vector<vector<int>>& arr, int n){
    // transpose
    for(int i=0;i<n;i++){
        // j=i+1 is imp
        for(int j=i+1;j<n;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
    // reverse
    for(int i=0;i<n;i++){
        // row is arr[i]
        reverse(arr[i].begin(),arr[i].end());
    }
    return arr;
}


int main(){
    vector<vector<int>>arr={{1,2,3},{4,5,6},{7,8,9}};
    int n=arr.size();
    // vector<vector<int>>rotated=rotateMatrixBy90Brute(arr,n);
    vector<vector<int>>rotated=rotateMatrixBy90Optimal(arr,n);

    // Output
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}