#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num) {
    if(num==1){
        return true;
    }
    int l=1;
    int r=num;
    double mid=l+(r-l)/2;
    while(l<=r){
        if(mid*mid==num){
            return true;
        }
        else if(mid*mid>num){
            r=mid-1;
        }
        else{
        	l=mid+1;
        }
        mid=l+(r-l)/2;
    }
    return false;
}

int main(){
	int n;
	cin>>n;

	cout<<isPerfectSquare(n);
}