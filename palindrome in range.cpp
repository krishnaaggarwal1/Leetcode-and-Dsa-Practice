#include<iostream>
using namespace std;

bool isPalindrome(int n){
	int rev=0;
	int org=n;

	while(n>0){
		int last=n%10;
		rev=rev*10+last;
		n=n/10;
	}
	if(org==rev)return true;
    return false;
}

int main(){
	int mini,maxi;
	cin>>mini>>maxi;

	for(int i=mini;i<=maxi;i++){
		if(isPalindrome(i)){
			cout<<i<<" ";
		}
	}

}