#include<bits/stdc++.h>
using namespace std;

int decimaltobinary(int n){
	int binaryno=0;
	int i=0;
	while(n>0){
		int bit= n%2;

		binaryno= bit*pow(10,i++)+binaryno;
		n=n/2; //or n=n>>1;
	}
	return binaryno;	
}

int binarytodecimal(int n){
	int decimal=0;
	int i=0;
	while(n>0){
		int bit=n%2;
		decimal= bit* pow(2,i++)+ decimal;
		n=n/10;
	}
	return decimal;
}

int main(){
	int n;
	cin>>n;
	// int binary= decimaltobinary(n);
	// cout<<binary<<endl;

	int decimal= binarytodecimal(n);
	cout<<decimal<<endl;
}