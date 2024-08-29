#include<bits/stdc++.h>
using namespace std;

// { gcd(a,b) = gcd(a-b,b) where a>b } keep on applying till one of the no. becomes 0

// better approach using % :
// { gcd(a,b) = gcd(a%b,b) where a>b } keep on applying till one of the no. becomes 0

// O(log(min(a,b)) time complexity
int euclideanAlgo(int a,int b){
    while(a>0 && b>0){
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) return b;
    else return a;
}

int main(){
    cout<<euclideanAlgo(12,9);
    return 0;
}