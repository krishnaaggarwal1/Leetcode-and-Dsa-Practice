#include<iostream>
using namespace std;

void running_sum(int a[],int n,int i,int j){

	for(int i=i+1;i<=j;i++){
		a[i]+=a[i-1];
		cout<<a[i]<<" ";
	}
}


int main(){
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int start,end;
	cin>>start>>end;

	running_sum(a,n,start,end);
}