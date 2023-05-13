#include <iostream>
using namespace std;

void reverse(int *a,int n){
    int low=0,high=n-1;
    while(low<high){
        int temp= a[low];
        a[low] = a[high];
        a[high] = temp;
        low++;
        high--;
    }
}

int main() {
	// your code goes here
	int n=5;
	
    int a[]={2,5,6,7,8};
	
	reverse(a,n);
	for(int i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
