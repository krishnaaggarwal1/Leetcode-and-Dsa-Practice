#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int n,int key){
	int start=0;
	int end=n-1;

	int mid = start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			return mid;

		}
		else if(arr[mid]>key){
			end=mid-1;

		}
		else{
			start=mid+1;
		}
		mid = start+(end-start)/2;
	}
}

int main()
{
	int n;
	cin>>n;
	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int key;
	cin>>key;
	
	cout<<"Occurence of " <<key<< " is "<<binary_search(a,n,key)<<endl;
}