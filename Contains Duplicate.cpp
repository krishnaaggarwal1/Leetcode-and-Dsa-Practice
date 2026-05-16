#include<bits/stdc++.h> 
using namespace std; 

bool containsDuplicate(vector<int>& nums) { 
    unordered_set<int> s; 
    for(auto i : nums) { 
        s.insert(i); 
    } 
    return s.size() < nums.size(); 
} 

int main() { 
    int n;
    cin >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++) { 
        cin >> nums[i]; 
    } 

    if(containsDuplicate(nums)) {
        cout << "Contains duplicates! (True)" << endl;
    } else {
        cout << "No duplicates! (False)" << endl;
    }

    return 0; 
}
