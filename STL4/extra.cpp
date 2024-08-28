#include<bits/stdc++.h>
using  namespace std;

void Extra(){

    sort(a,a+n);
    sort(v.begin(),v.end());
    sort(a+2,a+4); // ascending order
    sort(a,a+n,greater<int>); // descending order

    pair<int,int>a[]={{1,2},{2,1},{4,1}};

    // sort it according to second element
    // if second element is same,then sort
    // it according to first element but in descending

    // bool comp(pair<int,int> p1, pair<int,int> p2){
    //     if(p1.second < p2.second) return true;
    //     if(p1.second > p2.second) return false;

    //     if(p1.first > p2.first) return true;

    //     return false;
    // }

    // sort(a,a+n,comp);

    // {{4,1},{2,1},{1,2}};

    int num=7;
    int cnt=__builtin_popcount(num);

    long long num=165786578687;
    int cnt=__builtin_popcountll(num);

    string s="123";

    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(),s.end()));

    // int maxi= *max_element(a,a+n);
    
}

int main(){
    Extra();
    return 0;
}