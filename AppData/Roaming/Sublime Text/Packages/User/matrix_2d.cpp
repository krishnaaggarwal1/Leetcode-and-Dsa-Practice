#include<bits/stdc++.h>
using namespace std;

int print_rowsum(int arr[][4],int row,int col){
	for(int i=0;i<5;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=arr[j][i];
		}
		cout<<sum<<" ";
	}
}
int find_max(int arr[][4],int row,int col){
	int max=INT_MIN;
	for(int i=0;i<row;i++){
		
		for(int j=0;j<col;j++){
			if(arr[i][j]>max){
				max=arr[i][j];
			}
		}
	}
	return max;
}

void transpose_matrix(int arr[][4],int r, int c){
	for(int i=0;i<r;i++){
		
		for(int j=i+1;j<c;j++){
			swap(arr[i][j],arr[j][i]);
		}
	}
}
void print_matrix(int arr[][4],int r, int c){
	for(int i=0;i<r;i++){
		
		for(int j=0;j<c;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){

	//vector<vector<int> >arr;
	int row=3;
	int col=5;
	//vector<vector<int> >arr(row,vector<int> (col,0));
	// 0 0 0 0 0 
	// 0 0 0 0 0 
	// 0 0 0 0 0 
	//vector<vector<int> >arr(5,vector<int> (5,-3));

	vector<int> a{1,2,3};
	vector<int> b{3,6,7};
	vector<int> c{9,8,3};

	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);

	

	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[0].size();j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}



	/*
	int arr[4][4];
	int row=4,col=4;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	transpose_matrix(arr,row,col);
	print_matrix(arr,row,col);
	*/
}
