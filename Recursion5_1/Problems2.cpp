#include<bits/stdc++.h>
using namespace std;

// Sum of N numbers

// Parameterized Recursion Approach
int Sum(int i,int sum){
    if(i<1){
        return sum;
    }
    Sum(i-1,sum+i);
}

// Functional Recursion Approach
int SumOfN(int n){
    if(n==0) return 0;
    return n + SumOfN(n-1);
}

// Factorial of N numbers
int Factorial(int n){
    if(n==0) return 1;
    return n*Factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<Sum(n,0);
    cout<<endl;
    cout<<SumOfN(n);
    cout<<endl;
    cout<<Factorial(n);
    return 0;
}