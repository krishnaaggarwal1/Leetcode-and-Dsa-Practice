#include<iostream>
using namespace std;

void insertion_array(int a[],int size, int pos,int value ){

	for(int i=size-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	a[pos]=value;
	size++;
}
void print_array(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[10]={1,5,6,8,9,7,4};
	int size=7;

	int pos=3;
	int value=27;

	print_array(a,size);
	insertion_array(a,size,pos,value);
	print_array(a,size+1);
}