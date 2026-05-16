#include<iostream>
using namespace std;
int main(){

	int i=10;
	cout<<i<<endl;
	cout<<&i<<endl;
	int *p=&i;
	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<sizeof(i)<<endl;
	cout<<sizeof(p)<<endl;

	(*p)++;
	cout<<i<<endl;
}