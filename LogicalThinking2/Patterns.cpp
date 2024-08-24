// PATTERN 1
// *****
// *****
// *****
// *****
// #include<bits/stdc++.h>
// using namespace std;
// // user input
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
// }
// // fixed no. of rows and columns i.e. 4 (here)
// void print2(){
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
// }
// //With test cases
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 2
// *
// **
// ***
// ****
// *****
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//         cout<<"*";
//         } cout<<endl;
//     }
// }
// void print2(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//         cout<<"*";
//         } cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 3
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//         } cout<<endl;
//     }
// }
// void print2(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         cout<<j<<" ";
//         } cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//         } cout<<endl;
//     }
// }
// void print2(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=i;j++){
//         cout<<i<<" ";
//         } cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 5
// *****
// ****
// ***
// **
// *
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//         cout<<"*";
//         } cout<<endl;
//     }
// }
// void print2(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=n-i+1;j++){
//         cout<<"*";
//         } cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i+1;j++){
//         cout<<j<<" ";
//         } cout<<endl;
//     }
// }
// void print2(){
//     for(int i=1;i<=5;i++){
//         for(int j=1;j<=n-i+1;j++){
//         cout<<j<<" ";
//         } cout<<endl;
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i=0;i<t;i++){
//     int n;
//     cin>>n;
//     print1(n);
//     print2();
//     }
// }


// PATTERN 7
//    *
//   ***
//  *****
// *******
//*********
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
// print1(5);
// }


// PATTERN 8
// *********
//  *******
//   *****
//    ***
//     *
//     *
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
// print1(5);
// }


// PATTERN 9
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print2(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
// print1(5);
// print2(5);
// }


// PATTERN 10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n)
//         { stars=2*n-i;}
//         for(int j=1;j<=stars;j++){
//             cout<<"*";
//         }cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 11
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     int start=1;
//     for(int i=0;i<n;i++){
//         if(i%2==0) start=1;
//         else start=0;
//         for(int j=0;j<=i;j++){
//             cout<<start<<" ";
//             start=1-start;
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 12
// 1      1
// 12    21
// 123  321
// 12344321
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     int space=2*(n-1);
//     for(int i=1;i<=n;i++){
//         //numbers
//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         //spaces
//         for(int j=1;j<=space;j++){
//             cout<<" ";
//         }
//         //numbers
//         for(int j=i;j>=1;j--){
//             cout<<j;
//         }cout<<endl;
//         space=space-2;
//     }
// }
// int main(){
//     print1(4);
// }


// PATTERN 13
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     int num=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 14
// A
// AB
// ABC
// ABCD
// ABCDE
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+i;ch++){
//             cout<<ch;
//         }cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 15
// ABCDE
// ABCD
// ABC
// AB
// A
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(char ch='A';ch<='A'+(n-i-1);ch++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 16
// A
// BB
// CCC
// DDDD
// EEEEE
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         char ch='A'+i;
//         for(int j=0;j<=i;j++){
//             cout<<ch<<" ";
//         }cout<<endl;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 17
//    A
//   ABA
//  ABCBA
// ABCDCBA
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
// char ch='A';
// int breakpoint=(2*i+1)/2;
// for(int j=0;j<n-i-1;j++){
//     cout<<" ";
// }
// for(int j=1;j<=2*i+1;j++){
//     cout<<ch;
//     if(j<=breakpoint)ch++;
//     else ch--;
// }
// for(int j=0;j<n-i-1;j++){
//     cout<<" ";
// }
// cout<<endl;
// }
// }
// int main(){
//     print1(4);
// }


// PATTERN 18
// E
// D E
// C D E
// B C D E
// A B C D E
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
// int iniS=0;
// for(int i=0;i<n;i++){
//     // stars
//     for(int j=1;j<=n-i;j++){
//         cout<<"*";
//     }
//     // spaces
//     for(int j=0;j<iniS;j++){
//         cout<<" ";
//     }
//     // stars
//     for(int j=1;j<=n-i;j++){
//         cout<<"*";
//     }
//     iniS+=2;
//     cout<<endl;
// }
// iniS=8;
// for(int i=1;i<=n;i++){
//     // stars
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     // spaces
//     for(int j=0;j<iniS;j++){
//         cout<<" ";
//     }
//     // stars
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     iniS-=2;
//     cout<<endl;
// }
// }
// int main(){
//     print1(5);
// }


// PATTERN 19
// *        *
// **      **
// ***    ***
// ****  ****
// **********
// ****  ****
// ***    ***
// **      **
// *        *
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     int spaces=2*n-2;
//     for(int i=1;i<=2*n-1;i++){
//         int stars=i;
//         if(i>n) stars=2*n-i;
//         // stars
//         for(int j=1;j<=stars;j++){
//             cout<<"*";
//         }
//         // spaces
//         for(int j=1;j<=spaces;j++){
//             cout<<" ";
//         }
//         // stars
//         for(int j=1;j<=stars;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//         if(i<n)spaces-=2;
//         else spaces+=2;
//     }
// }
// int main(){
//     print1(5);
// }


// PATTERN 21
// ****
// *  *
// *  *
// ****
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==0||j==0||i==n-1||j==n-1){
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print1(4);
// }


// PATTERN 22
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i=0;i<2*n-1;i++){
//         for(int j=0;j<2*n-1;j++){
//             int top = i;
//             int left = j;
//             int right = (2*n-2)-j;
//             int down = (2*n-2)-i;
//             cout<<(n-min(min(top,down),min(left,right)));
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     print1(4);
// }






