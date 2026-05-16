#include<iostream>
using namespace std;

bool palindrome_check(int n){

	if(n<0) return false;

	int rev=0;
	int org=n;

	while(n>0){
		int last=n%10;
		rev=rev*10+last;

		n/=10;
	}
	// if(rev==org){
	// 	return true;
	// }
	// else{
	// 	return false;
	// }
	return rev==org;
}

int main(){
	int n;
	cin>>n;

	cout<<palindrome_check(n);


}