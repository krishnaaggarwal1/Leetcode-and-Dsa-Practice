#include <bits/stdc++.h>
 
using namespace std;
int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}

int main(){

  int arr[]={4,3,8,9,40,-7,20};
  int n=sizeof(arr)/sizeof(arr[0]);

  cout<<findLargestElement(arr,n);

}