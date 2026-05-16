#include<bits/stdc++.h>
using namespace std;

int ap(int n){
	int ans= (3*n) +7;

	return ans;
}

int countSetBits(int n){

	int count=0;
	while(n!=0){
		if(n&1){
			count++;
		}
		n=n>>1;
	}
	return count;

}

void fibo(int n){

	int a = 0;
    int b = 1;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        int next_number = a + b;
        cout<<next_number<<" ";

        a = b;
        b = next_number; 

    }


}

int main()
{
	int n;
	cin>>n;
	// cout<<ap(n);

	
	// int a,b;
	// cin>>a>>b;
	// int x= countSetBits(a);
	// int y =countSetBits(b);

	// cout<< x+y <<endl;

	fibo(n);

}