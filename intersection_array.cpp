#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v{10,20,30,40,50,60};
	vector<int> a{15,20,17,40,50};
	vector<int> ans;
	
	for(int i=0;i<v.size();i++){
		int ele=v[i];
		for(int j=0;j<a.size();j++){
			//cout<<"("<<ele<<","<<v[j]<<")"<<endl;
			if(ele==a[j]){
				ans.push_back(ele);
			}

		}
	}
	for (auto &it:ans){
		cout<<it<<" ";

	}
}