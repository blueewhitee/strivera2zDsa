#include <bits/stdc++.h>
using namespace std;
    void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = 0; // Count of non-zero elements

    // Traverse the array. If element encountered is non-zero, then replace the element at index 'j' with this element
    for (int i = 0; i < n; i++)
        if (nums[i] != 0)
            nums[j++] = nums[i]; // here count is incremented

    // Now all non-zero elements have been shifted to front and 'j' is set as index of first 0. Make all elements 0 from count to end.
    while (j < n)
        nums[j++] = 0;
        
        
        }
int main(){
    vector<int >nums;
    nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(auto it :nums){
        cout<<it;
    }


return 8;
}