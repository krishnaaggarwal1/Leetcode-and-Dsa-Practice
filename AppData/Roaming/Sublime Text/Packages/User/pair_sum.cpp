#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v{10,20,30,40,50,60};
	int sum=50;
	for(int i=0;i<v.size();i++){
		int ele=v[i];
		for(int j=i+1;j<v.size();j++){
			//cout<<"("<<ele<<","<<v[j]<<")"<<endl;
			if(ele+v[j]==sum){
				cout<<ele<<","<<v[j]<<endl;
			}
		}
	}
}