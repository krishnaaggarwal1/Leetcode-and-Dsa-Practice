#include<iostream>
#include<vector>
using namespace std;

int numIdenticalPairs(vector<int>& nums) {
    int n=nums.size();
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                ++count;
            }
        }
    }
    return count;        
}

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Number of good pairs: " << numIdenticalPairs(v) << endl;
    return 0;
}