#include<bits/stdc++.h>
using namespace std;

void name(int i,int n){
    if(i>n) return;

    cout<<"Anushka"<<" ";
    name(i+1,n);
}

void oneToN(int i,int n){
    if(i>n) return;

    cout<<i<<" ";
    oneToN(i+1,n);
}

void nToOne(int i,int n){
    if(i<1) return;

    cout<<i<<" ";
    nToOne(i-1,n);
}

// Back Tracking
void oneToNBT(int i,int n){
    if(i<1) return;

    oneToNBT(i-1,n);
    cout<<i<<" ";
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
    oneToNBT(n,n); // prints : 1...n - back tracking
    cout<<endl;
    return 0;
}

