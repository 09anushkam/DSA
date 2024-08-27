#include<bits/stdc++.h>
using namespace std;

// pass by value

// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }

// void doSomething(string s){
//     s[0]='t';
//     cout<<s<<endl;
// }

// pass by reference
// note - arrays takes value by reference only 

void doSomething(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

void doSomething(string &s){
    s[0]='t';
    cout<<s<<endl;
}

void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function : "<<arr[0]<<endl;
}


int main(){
    int  num = 10;
    doSomething(num); 
    cout<<num<<endl;

    string s="raj";
    doSomething(s);
    cout<<s<<endl;

    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    doSomething(arr,n);
    cout<<"Value inside int main : "<<arr[0]<<endl;
    return 0;
}

