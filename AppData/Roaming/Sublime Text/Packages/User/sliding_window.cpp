#include<bits/stdc++.h>
using namespace std;


int findMaxSum(int a[],int n,int k)
{
	int currsum=0;
	for(int i=0;i<k;i++){
		currsum+=a[i];
	}
	int maxsum=currsum;

	for(int i=k;i<n-k;i++){
		currsum-=a[i-k];
		currsum+=a[i];
		maxsum=max(maxsum,currsum);
	}
	return maxsum;
}
int main()
{
	int n,k;
	int a[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	cout<<findMaxSum(a,n,k);
}