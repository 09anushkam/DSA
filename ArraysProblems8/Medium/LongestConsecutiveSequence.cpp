#include<bits/stdc++.h>
using namespace std;

// Brute - TC - O(n²) , SC - O(1)

bool linearSearch(vector<int>& arr,int num){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
    }
    return false;
}

int longestConsecutiveSequenceBrute(vector<int>& arr){
    int n=arr.size();
    int longest=1;

    // pick an element and search for its consecutive numbers
    for(int i=0;i<n;i++){
        int x=arr[i];
        int cnt=1;
        // search for consecutive numbers using linear search
        while(linearSearch(arr,x+1)==true){
            x++;
            cnt++;
        }
        longest=max(longest,cnt);
    }
    return longest;
}

// Better - TC - O(nlogn) + O(n) , SC - O(1)

int longestConsecutiveSequenceBetter(vector<int>& arr){
    // cnt -> consecutive no.s then increment if not consecutive then cnt=1 (reset), for counting no. of elements in each consecutive sequence
    // lastSmaller -> updating with the current no.
    // longest -> largest of cnt

    int n=arr.size();
    if(n==0) return 0;

    sort(arr.begin(),arr.end());
    // 1,2,3,4,100,200

    int lastSmaller=INT_MIN;
    int cnt=0;
    int longest=1;

    for(int i=0;i<n;i++){
        // arr[i] is next element of current sequence
        // 4==99 -> false -> else if
        if(lastSmaller==arr[i]-1){
            cnt++;
            lastSmaller=arr[i];
        }

        // new consecutive sequence
        // 4!=100 -> true -> cnt=1, lastSmaller=100
        else if(lastSmaller!=arr[i]){
            cnt=1;
            lastSmaller=arr[i];
        }

        longest=max(longest,cnt);
    }

    return longest;
}

// Optimal - TC - O(n) , SC - O(n)

int longestConsecutiveSequenceOptimal(vector<int>& arr){
    int n=arr.size();
    if(n==0) return 0;

    int longest=1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }

    for(auto it:st){
        // find start element of sequence. Since it's previous do not exist thus this is start element
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            // linear search or find consecutive numbers
            while(st.find(x+1)!=st.end()){
                x++;
                cnt++;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}

int main(){
    vector<int>arr={100,200,1,2,3,4};
    int ans=longestConsecutiveSequenceBrute(arr);
    int ans1=longestConsecutiveSequenceBetter(arr);
    int ans2=longestConsecutiveSequenceOptimal(arr);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}