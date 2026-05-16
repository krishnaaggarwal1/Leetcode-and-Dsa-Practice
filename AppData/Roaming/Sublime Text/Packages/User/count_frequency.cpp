#include<bits/stdc++.h>
using namespace std;

void countfrequency(int arr[],int n){
	
	unordered_map<int,int>map;

	for(int i=0;i<n;i++){
		map[arr[i]]++;

	}
	for(auto x : map){
		cout<<x.first <<" "<<x.second<<endl;
	}
}

int main(){
	int arr[]={2,4,5,2,4,2,3,4,5,7};
	int n= sizeof(arr)/sizeof(arr[0]);

	countfrequency(arr,n);
}