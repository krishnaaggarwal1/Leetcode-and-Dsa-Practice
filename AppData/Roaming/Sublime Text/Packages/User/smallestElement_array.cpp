#include<iostream>
using namespace std;

int smallestElement(int arr[],int n){
	int small=arr[0];

	for(int i=0;i<n;i++){
		if(small>arr[i]){
			small=arr[i];
		}
	}
	return small;
}

int main(){

	int arr[]={4,3,8,9,40,-7,20};
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<smallestElement(arr,n);

}