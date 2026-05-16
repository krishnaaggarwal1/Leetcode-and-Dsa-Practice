#include<bits/stdc++.h>
using namespace std;

int sqroot(int n){
	int start=0;
	int end=n-1;
	int ans = -1;
	int key = n;

	int mid = start+(end-start)/2;

	while(start<=end){
		if(mid *mid ==key){
			return mid;

		}
		else if(mid *mid>key){
			end=mid-1;

		}
		else{
			ans=mid;
			start=mid+1;
		}
		mid = start+(end-start)/2;
	}
	return ans;
}

int main(){
	int n;
	cin>>n;

	cout<<sqroot(n);
}