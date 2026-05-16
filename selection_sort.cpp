#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    // Outer loop: Iterate over each element (except the last one, as it will be sorted by then)
    for (int i = 0; i < n - 1; i++) {
        int mini = i;  // Assume the current position i holds the smallest element
        // Inner loop: Find the smallest element in the remaining unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        // Swap the found smallest element with the element at the current position i
        if (mini != i) {
            swap(arr[mini], arr[i]);
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
	int arr[] = {13,46,24,52,20,9};

	int n= sizeof(arr)/sizeof(arr[0]);

	cout<<"Before Selection Sort"<<endl;

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"After Selection Sort"<<endl;

	selection_sort(arr,n);

	printArray(arr, n);

}