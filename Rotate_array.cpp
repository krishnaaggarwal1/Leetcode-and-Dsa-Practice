#include<iostream>
using namespace std;

void array_rotate(int arr[],int n, int steps){
	steps=steps%n;
	for (int i = 0; i < n; i++) {
        int index=(i+n-steps)%n;
        arr[index]=arr[i];
    }
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
	int n;
	cin>>n;

	int a[10];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int steps=4;

	printArray(a,n);
	array_rotate(a,n,steps);
	printArray(a,n);
}