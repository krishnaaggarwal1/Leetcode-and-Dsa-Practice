#include<iostream>
#include<vector>
using namespace std;
void sort0and1s(int a[],int n){
	int i=0,j=n-1;
	while(i<j){
		if(a[i]==0){
			i++;
		}
		if(a[j]==1){
			j--;
		}
		if(a[i]==1 and a[j]==0){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int n;
	cin>>n;
	int arr[50];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort0and1s(arr,n);
	printArray(arr,n);

}