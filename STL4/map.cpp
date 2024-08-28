#include<bits/stdc++.h>
using namespace std;

// map stores unique keys in sorted order
void Map(){
    map<int,int>mpp;
    map<int,pair<int,int>>mpp;
    map<pair<int,int>,int>mpp;

    mpp[1]=2; // for 1st declaration
    mpp.emplace({3,1}); // for 1st declaration
    mpp.insert({2,4}); // for 1st declaration
    mpp[{2,3}]=10; // for 3rd declaration

    // {
    //     {1,2}
    //     {2,4}
    //     {3,1}
    // }

    for(auto  it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]; // 2
    cout<<mpp[5]; // 0

    auto it=mpp.find(3);
    // cout<<*(it).second; // error

    auto it=mpp.find(5);
    
    // This is the syntax
    auto it=mpp.lower_bound(2);
    auto it=mpp.upper_bound(3);

    // erase,swap,size,empty are same as above
}

// duplicate keys, sorted order
void MultiMap(){
    // everything same as map, only it can store multiple keys / duplicate keys
    // only mpp[key] cannot be used here
}

// duplicate keys only
void UnorderedMap(){
    // same as set and unordered_Set difference
}

bool comp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second<p2.second){
        return  true;
    }
    else if(p1.second==p2.second){
        return true;
    }
    return false;
}

int main(){
    Map();
    MultiMap();
    UnorderedMap();
    return 0;
}