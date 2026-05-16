#include<iostream>
using namespace std;

void movenegative(int arr[],int n){
	int i=0,j=0;
	while(i<n and j<n){
		if(arr[j]<0 and arr[i]>0){
			swap(arr[i],arr[j]);
			i++;
		}
		j++;
		if (arr[i] <= 0){
			i++;
		}
	}
}

void movenegative_new(int arr[],int n){
	int i=0,j=n-1;
	while(i<j){
		if(arr[i]<0){
			i++;
		}
		else if(arr[j]>0){
			j--;
		}
		else{
			swap(arr[i],arr[j]);
		}
	}
}


void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cin>>n;
	int arr[20];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	printArray(arr,n);
	movenegative_new(arr,n);
	printArray(arr,n);


	return 0;
}