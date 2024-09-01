#include<bits/stdc++.h>
using namespace std;

void reverseArray(int i,int arr[],int n){
    if(i>=n/2) return; //i>=n/2 bcoz if u iterate throughout array, u will end up getting the same array so just iterate over half array
    swap(arr[i],arr[n-i-1]);
    reverseArray(i+1,arr,n);
}

// madam
// 01234
// 0!=4 -> m!=m (it is false so come out of if) -> and goes to next return Palindrome(1,s)
// 1!=3 -> a!=a (it is false so come out of if) -> and goes to next return Palindrome(2,s)
// 2>=2 -> return true
// watch striver's video he has explain nicely
bool Palindrome(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return Palindrome(i+1,s);
}

// Multiple Recursion calls

// int Fibonacci(int n){
//     if(n<=1) return n;
//     return Fibonacci(n-1)+Fibonacci(n-2);
// }

int Fibonacci(int n){
    int last,secondLast;
    if(n<=1) return n;
    last=Fibonacci(n-1); // called completed
    secondLast=Fibonacci(n-2); // then this is called and completed
    return last + secondLast;
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
    cout<<Palindrome(0,s)<<endl; //true=1

    for(int i=0;i<n;i++){
        cout<<Fibonacci(i)<<" ";
    }cout<<endl;

    return 0;
}