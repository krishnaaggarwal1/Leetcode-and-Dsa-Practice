#include<iostream>
using namespace std;

int max_elem(int a[],int n){

	if(n==1){
		return a[0];
	}

	return max(a[n-1],max_elem(a,n-1));
}
int min_elem(int a[],int n){

	if(n==1){
		return a[0];
	}

	return min(a[n-1],min_elem(a,n-1));
}
int main()
{
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<max_elem(a,n)<<endl;
	cout<<min_elem(a,n)<<endl;
}