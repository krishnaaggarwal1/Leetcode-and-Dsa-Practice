// Swap alternate
#include<bits/stdc++.h>
using namespace std;

void swapalternate(int a[],int n){

	for(int i=0;i<n;i+=2){
		if(i+1 <n){
			swap(a[i],a[i+1]);
		}

	}

}
void printArray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

int find_max(int a[],int n){

	int max = -99999;
	

	for(int i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		return max;
	}
}
int find_min(int a[],int n){

	int min = 99999;

	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		return min;
	}
}

int main()
{
	
	int n;
	cin>>n;
	int a[20];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	// cout<<find_max(a,n)<<" "<<endl;
	// cout<<find_min(a,n)<<" ";
	swapalternate(a,n);
	printArray(a,n);
}