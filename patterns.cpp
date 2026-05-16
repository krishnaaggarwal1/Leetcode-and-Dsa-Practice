#include<iostream>
using namespace std;



int main() {
/*
1 2 3 4 4 3 2 1 
1 2 3 * * 3 2 1 
1 2 * * * * 2 1 
1 * * * * * * 1 

*/
    int n;
    cin >> n;
    int i = 1;

    while (i <= n) {
        // part 1: numbers from 1 to n - i + 1
        int j = 1;
        while (j <= n - i + 1) {
            cout << j << " ";
            j = j + 1;
        }

        // part 2: Stars (i - 1) * 2 times
        j = 1;
        while (j <= (i - 1) * 2) {
            cout << "* ";
            j = j + 1;
        }

        // part 3: numbers from n - i + 1 to 1
        j = n - i + 1;
        while (j >= 1) {
            cout << j << " ";
            j = j - 1;
        }

        i = i + 1;
        cout << endl;
    }
    return 0;
}
/*

int main() {


   1
  121
 12321
1234321

	int n;
	cin>>n;
	int i=1;
	
	
	while(i<=n){
	    
	    int space = n-i;
	    while(space){
	        cout<<" ";
	        space--;
	    }
	    
        int j=1;
		while(j<=i){
			cout<<j;
			j++;
			
		}
		int x = i-1;
		while(x>=1){
		    cout<<x;
		    x--;
		    
		}
		cout<<endl;
		i++;
	}
}

int main() {

****
 *** 
  **
   *

	// your code goes here
	int n;
	cin>>n;
	int i=1;
	
	
	while(i<=n){
	    
		int j=1;
		int space=1;
		
		
		while(space<i){
		    cout<<" ";
		    space++;
		}
		
		while(j<=n-i+1){
			cout<<"*";
			j++;
			
		}
		cout<<endl;
		i++;
	}

}


   
{
	
	1 
    2 1 
    3 2 1 
    4 3 2 1 
	
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		int j=1;
		int x=i;
		while(j<=i){
			cout<<x<<" ";
			j++;
			x--;
		}
		cout<<endl;
		i++;
	}
}


{

	1 
    2 3 
    3 4 5 
    4 5 6 7  

	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		int j=1;
		int x=i;
		while(j<=i){
			cout<<x<<" ";
			j++;
			x++;
		}
		cout<<endl;
		i++;
	}
}


{
	
	1 
    2 3 
    4 5 6 
    7 8 9 10 
	
	int n;
	cin>>n;
	int i=1;
	int x=1;
	while(i<=n){
		int j=1;
		
		while(j<=i){
			cout<<x<<" ";
			j++;
			x++;
		}
		cout<<endl;
		i++;
	}
}


{
	
	1 
    1 2 
    1 2 3 
    1 2 3 4 
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		
		while(j<=i){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	
	1 
	2 2 
	3 3 3 
	4 4 4 4 
	
	int n;
	cin>>n;
	int i=1;
	
	while(i<=n){
		int j=1;
		
		while(j<=i){
			cout<<i<<" ";
			j++;
			
		}
		cout<<endl;
		i++;
	}
}


{
	
	* 
	* * 
	* * * 
	
	int n;
	cin>>n;
	int i=1;
	//int x=n*n;
	while(i<=n){
		int j=1;
		
		while(j<=i){
			cout<<"*"<<" ";
			j++;
			//x--;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	
	9 8 7 
    6 5 4 
    3 2 1 
	
	int n;
	cin>>n;
	int i=1;
	int x=n*n;
	while(i<=n){
		int j=1;
		
		while(j<=n){
			cout<<x<<" ";
			j++;
			x--;
		}
		cout<<endl;
		i++;
	}
}
{
	
	1 2 3 4 
    5 6 7 8 
    9 10 11 12 
    13 14 15 16 
	
	int n;
	cin>>n;
	int i=1;
	int x=1;
	while(i<=n){
		int j=1;
		
		while(j<=n){
			cout<<x<<" ";
			j++;
			x++;
		}
		cout<<endl;
		i++;
	}
}
{
	
	1 2 3 4 
	1 2 3 4 
	1 2 3 4 
	1 2 3 4 
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}
{
	
	5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
    5 4 3 2 1 
	
	int n;
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<n-j+1<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}

int main() {
	// your code goes here

	D 
	C D 
	B C D 
	A B C D 

	int n;
	cin>>n;
	int i=1;
	
	
	while(i<=n){
		int j=1;
		char ch = 'A'+n-i;
		
		while(j<=i){
			cout<<ch<<" ";
			ch++;
			j++;
			
		}
		cout<<endl;
		i++;
	}

}

*/