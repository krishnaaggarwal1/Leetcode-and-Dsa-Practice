#include<iostream>
using namespace std;

int second_largest(int a[],int n){
	int large=0,temp=-1;

	for(int i=0;i<n;i++){

		if(a[i]>large){
			temp=large;
			large=a[i];
		}
	}
	return temp;


}

int main(){
	int n;
	cin>>n;

	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<second_largest(a,n);
}