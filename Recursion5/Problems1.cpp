#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i>n) return; // base case

    cout<<"Anushka"<<" "; // n times ...... Anushka
    name(i+1,n);
}

void oneToN(int i,int n){
    if(i>n) return;

    cout<<i<<" "; // 1 2 3 4 ..... n
    oneToN(i+1,n);
}

void nToOne(int i,int n){
    if(i<1) return; // base case

    cout<<i<<" "; // n ..... 4 3 2 1
    nToOne(i-1,n);
}

// Back Tracking
void oneToN_BT(int i,int n){
    if(i<1) return; // base case

    oneToN_BT(i-1,n);
    cout<<i<<" "; // 1 2 3 4 ...... n
}

// Back Tracking
void NToOne_BT(int i,int n){
    if(i>n) return; // base case

    NToOne_BT(i+1,n);
    cout<<i<<" "; // n ...... 4 3 2 1
}

int main(){
    int n;
    cin>>n;
    name(1,n);
    cout<<endl;
    oneToN(1,n);
    cout<<endl;
    nToOne(n,n);
    cout<<endl;
    oneToN_BT(n,n); // prints : 1...n - using back tracking
    cout<<endl;
    NToOne_BT(1,n); // prints : n...1 - using back tracking
    cout<<endl;
    return 0;
}

