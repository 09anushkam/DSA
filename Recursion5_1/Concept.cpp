#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void print(){
    if(cnt==3) return; // base case

    cout<<cnt<<endl;
    cnt++;
    print();
}

int main(){
    print();
    return 0;
}