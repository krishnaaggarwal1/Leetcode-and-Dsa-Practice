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
	
	cout<<"No. of  Occurence of " <<key<< " is "<<(lastocc(a,n,key)-firstocc(a,n,key))+1<<endl;

	int first = firstocc(arr,n,key);
	int last = lastocc(arr,n,key);

	if(first!=-1 and last!=-1) 
		return last-first+1;
	else 
		return 0;
	
}