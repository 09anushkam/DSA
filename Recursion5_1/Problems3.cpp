#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

bool Palindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return Palindrome(i+1,s);
}

int Fibonacci(int n){
    if(n<=1) return n;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++) cin>>arr[i];
    reverseArray(0,arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    string s="madam";
    cout<<Palindrome(0,s)<<endl;

    for(int i=0;i<n;i++){
        cout<<Fibonacci(i)<<" ";
    }cout<<endl;

    return 0;
}