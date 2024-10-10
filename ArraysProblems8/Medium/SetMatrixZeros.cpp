#include<bits/stdc++.h>
using namespace std;

// Brute Force - TC - O(n*m)*(n+m)+(n*m) = n³ , SC - O(1)

// int** arr is dynamic allocation of memory for array
void markRow(int** arr,int col,int i){
    // iterates every element of the col and mark it as -1
    for(int j=0;j<col;j++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}

void markColumn(int** arr,int row,int j){
    // iterates every element of the row and mark it as -1
    for(int i=0;i<row;i++){
        if(arr[i][j]!=0){
            arr[i][j]=-1;
        }
    }
}

void setMatrixZeroBrute(int** arr, int row, int col){
    // in the row and column of matrix containing zero, the non-zeros will be marked by -1
    // n*m
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                markRow(arr,col,i); //m
                markColumn(arr,row,j); //n
            }
        }
    }
    
    // now replace those -1 by 0
    // n*m
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==-1){
                arr[i][j]=0;
            }
        }
    }

}

// Better - TC - O(n*m) = n² , SC - O(n)+O(m)
// take 2 arrays which keeps track of columns and rows

void setMatrixZeroBetter(int** arr, int row, int col){
    int rowArray[row]={0};
    int columnArray[col]={0};

    // if any no./element is zero, mark the row and column corresponding to it as 0
    for(int i=0;i<row;i++){
        for (int j = 0; j < col; j++){
            if(arr[i][j]==0){
                rowArray[i]=1;
                columnArray[j]=1;
            }
        }
    }

    // now update with zero at those places where 
    for(int i=0;i<row;i++){
        for(int j = 0; j < col; j++){
            if(rowArray[i] || columnArray[j]){
                arr[i][j]=0;
            }
        }
    }
}

// Optimal - TC - O(n*m) = n² , SC - O(1)
// Tough to think and understand

void setMatrixZeroOptimal(int** arr, int row, int col){
    // int colArray[col]={0}; -> arr[0][..]
    // int rowArray[row]={0}; -> arr[..][0]
    int col0=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                // mark the i-th row
                arr[i][0]=0;
                // mark the j-th col
                if(j!=0)
                arr[0][j]=0;
                else
                col0=0;
            }
        }
    }

    // except first row and first column mark everything as 0 which was non zero earlier
    for(int i=1;i<row;i++){
        for(int j=1;j<col;j++){
            if(arr[i][j]!=0){
                // check for col & row
                if(arr[0][j]==0 || arr[i][0]==0){
                    arr[i][j]=0;
                }
            }
        }
    }

    // not understood much
    // if arr[0][0] is 0 update complete 0th row with element as 0
    if(arr[0][0]==0){
        for(int j=0;j<col;j++){
            arr[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<col;i++){
            arr[i][0]=0;
        }
    }
}

int main(){
    int row,col;
    cin>>row>>col;
    // int arr[row][col]; // throw error as this is static memory allocation for array

    // learned something new
    // Dynamically allocate a 2D array or use vector
    int** arr = new int*[row];
    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    // Input
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    setMatrixZeroBrute(arr,row,col);
    setMatrixZeroBetter(arr,row,col);
    setMatrixZeroOptimal(arr,row,col);

    // Output
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Deallocate memory
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    delete[] arr;


    return 0;
}