#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans = -1;

	int mid = start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			end = mid-1;

		}
		else if(arr[mid]>key){
			end=mid-1;

		}
		else{
			start=mid+1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}
int lastocc(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	int ans = -1;

	int mid = start+(end-start)/2;

	while(start<=end){
		if(arr[mid]==key){
			ans=mid;
			start=mid+1;

		}
		else if(arr[mid]>key){
			end=mid-1;

		}
		else{
			start=mid+1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
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
	
	cout<<"First Occurence of " <<key<< " is "<<firstocc(a,n,key)<<endl;
	cout<<"Last Occurence of " <<key<< " is "<<lastocc(a,n,key)<<endl;
}