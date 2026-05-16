#include<bits/stdc++.h>
using namespace std;
int main(){
	char ch;
	cin>>ch;

	if(ch >= 'a' && ch< ='z'){
		cout<<"Lower"<<endl;
	}
	else if(ch >= 'A' && ch<= 'Z'){
		cout<<"Upper"<<endl;
	}
	else if(ch >= '0' && ch< ='9'){
		cout<<"number"<<endl;
	}
	else{
		cout<<"other"<<endl;
	}
}