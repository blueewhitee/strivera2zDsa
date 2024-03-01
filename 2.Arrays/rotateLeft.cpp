#include <bits/stdc++.h>
using namespace std;
void bf(vector<int>&nums,int k){
    k =k%(nums.size());
    for(int l=0;l<k;l++){
    int j = nums.size()-1;
    int k = j-1;
    int temp = nums[j];
    for(k;k>=0;k--){
        nums[k+1]=nums[k];
    }
    nums[0]=temp;}
for(auto it:nums){
    cout<<it;
}
}

void better (vector<int >&nums,int k ){
    
}

int main(){
    vector<int >nums  = {1,2,3,4,5,6,7};
   // bf(nums,3);
    better(nums,3);





return 8;
}
