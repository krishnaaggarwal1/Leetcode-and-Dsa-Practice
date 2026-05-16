
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      string str;
      cin>>str;
      
      int cA = 0, cB = 0;

        for (char ch : str) {
            if (ch == 'A') {
                cA++;
            } else if (ch == 'B') {
                cB++;
            }
        }
        if (cA > cB) {
            cout << "A\n";
        } else{
            cout << "B\n";
        } 
    }
  
}
