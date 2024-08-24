#include<bits/stdc++.h>
using namespace std;

// Pair 
void Pair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>>p2={1,{3,4}};
    cout<<p2.first<<" "<<p2.second.second<<" "<<p2.second.first<<endl;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}

// Dynamic Array

// Most useful functions for vector
// v.push_back(val)
// v.emplace_back(val)
// v.begin()
// v.back()
// v.end()
// v.pop_back()
// v.insert(pos,val)
// v.erase(pos) or erase(start_pos,end_pos)
// v.clear()
// v.empty() - T/F
// v1.swap(v2)

// sort(),sort(beg,end),stable_sort(),stable_sort(beg,end)
// lower_bound(),upper_bound()
// binary_search(),binary_search(beg,end,x)
// next_permutation(),prev_permutation()

void Vector(){
    vector<int>v;
    v.push_back(1);
    v.emplace_back(2);

    cout<<v[0]<<" "<<v.at(0)<<" ";
    cout<<v.back()<<" ";

    vector<int>::iterator i=v.begin();
    i++;
    cout<<*(i)<<" ";

    i=i+2;
    cout<<*(i)<<" ";

    vector<int>::iterator j=v.end(); //pointer right after end
    // vector<int>::iterator j1=v.rend(); //reverse of end
    // vector<int>::iterator j2=v.rbegin(); //reverse of begin
    j--;
    cout<<*(j)<<endl;

    vector<pair<int,int>>vec;

    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int>v1(5,100); // 100 100 100 100 100
    vector<int>v2(5); // 0 0 0 0 0

    vector<int>v3(5,20); // 20 20 20 20 20
    vector<int>v4(v3); // 20 20 20 20 20 (copy of v3)

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }cout<<endl;

    for(auto it:v){
        cout<<it<<" ";
    }cout<<endl;

    // {10,20,12,23}
    v.erase(v.begin()+1);
    // {10,20,12,23,35}
    v.erase(v.begin()+2,v.begin()+4); // {10,20,35} [start,end] end address - after the element

    // Insert function

    vector<int>vi(2,100); // {100,100}
    vi.insert(vi.begin(),300); // {300,100,100}
    vi.insert(vi.begin()+1,2,10); // {300,10,10,100,100}
    
    vector<int>copy(2,50); // {50,50}
    vi.insert(vi.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,10

    // {10,20}
    cout<<vi.size(); // 2
     
    // {10,20}
    vi.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}

    v1.swap(v2); // v1 -> {30,40} , v2 -> {10,20}

    v.clear(); // erases the entire vector
    cout<<v.empty();
}


int main(){
    Pair();
    Vector();
    return 0;
}
