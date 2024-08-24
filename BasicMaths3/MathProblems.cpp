#include<bits/stdc++.h>
using namespace std;

// Extracting digits :
// digit=n%10;
// n=n/10; 
// repeat above 2 steps till n>0

// Count Digits
// O(log(n))
int countDigits(int n){	
	int count=0;
	while(n>0){
		int lastDigit=n%10;
		count++;
		n=n/10;
	}
	return count;
}

int countDigitsUsingLog(int n){	
	int count=(int)(log10(n)+1);
	return count;
}

// Find Reverse of a number
int reverseOfNumber(int n){
    int revNum=0;
	while(n>0){
		int lastDigit=n%10;
        // Formula to find reverse number v.v.imp
        revNum=(revNum*10)+lastDigit;
		n=n/10;
	}
    return revNum;
}

// Palindrome (121==121)
// At the end n becomes 0 so store n in a variable, earlier itself 
bool palinDrome(int n){
    int revNum=0;
    int num=n;
	while(n>0){
		int lastDigit=n%10;
        revNum=(revNum*10)+lastDigit;
		n=n/10;
	}

    if(revNum==num)
    return true;
    else 
    return false;
}

// Armstrong Number (371=(3*3*3)+(7*7*7)+(1*1*1))
bool armstrongNumber(int n){
    int num=n;
    int sum=0;
    while(n>0){
		int lastDigit=n%10;
        sum=sum+lastDigit*lastDigit*lastDigit;
		n=n/10;
	}
    if(sum==num) 
    return true;
    else 
    return false;
}

// Print All Divisors
void printAllDivisors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    } cout<<endl;
}

void printAllDivisorsBetterApproach(int n){
    vector<int>ls;
    // i<=sqrt(n) or i*i<=n
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ls.push_back(i);
            if((n/i)!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it:ls) {
        cout<<it<<" ";
    }
    cout<<endl;
}

// O(sqrt(n))
bool primeNumber(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return true;
    }else{
        return false;
    }
}

int GCD(int n1,int n2){
    int gcd=1;
    // O(min(n1,n2))
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    // this is better approach but sometimes it is useless because gcd is some smaller no. like 1 as in the case of (11,13)
    // O(min(n1,n2)) - in worst case
    for(int i=min(n1,n2);i>1;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    return gcd;
}




int main(){
    cout<<countDigits(2344)<<endl;
    cout<<countDigitsUsingLog(2344)<<endl;
    cout<<reverseOfNumber(144)<<endl;
    cout<<palinDrome(121)<<endl;
    cout<<armstrongNumber(371)<<endl;
    printAllDivisors(36);
    printAllDivisorsBetterApproach(36);
    cout<<primeNumber(3)<<endl;
    cout<<GCD(9,12);
    return 0;
}

