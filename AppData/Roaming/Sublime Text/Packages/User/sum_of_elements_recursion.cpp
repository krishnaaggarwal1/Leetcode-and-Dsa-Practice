#include<iostream>
using namespace std;

int count_elem(int n){

	if(n==0){
		return 0;
	}

	return 1+ count_elem(n/10);
}

int sum_elem(int n){

	if(n==0){
		return 0;
	}

	return n%10 + sum_elem(n/10);
}

int main(){

	int n;
	cin>>n;

	cout<<count_elem(n)<<'\n';
	cout<<sum_elem(n)<<'\n';

}