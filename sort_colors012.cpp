#include<iostream>
#include<vector>
using namespace std;

void sort_012(int arr[],int n){
	int l=0,m=0,r=n-1;
	while(m<=r){
		if(arr[m]==0){
			swap(arr[l],arr[m]);
			l++;
			m++;
		}
		else if(arr[m]==1){
			m++;
		} 
		else{
			swap(arr[r],arr[m]);
			r--;
		}
	}
}



void sort0_1and2s(int a[],int n){
	int zero=0,one=0,two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0)
                zero++;
            else if(a[i]==1)
                one++;
            else if(a[i]==2)
                two++;
            }
        for (int i = 0; i < n; i++) {
            if (zero > 0) {
                a[i] = 0;
                zero--;
            } else if (one > 0) {
                a[i] = 1;
                one--;
            } else if (two > 0) {
                a[i] = 2;
                two--;
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
	sort_012(arr,n);
	printArray(arr,n);

}