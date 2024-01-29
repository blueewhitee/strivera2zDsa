#include <bits/stdc++.h>
using namespace std;
void indexes(vector<int>nums,int target){
    map<int ,int >mpp; // <int,int> <element,index>
    for(int i =0;i<nums.size();i++){
        int a = nums[i];//3
        int remaining = target - a;
        //now using maps to find if we already have the remaning element in the map or not
        if(mpp.find(remaining)!=mpp.end()){
            cout<<mpp[remaining]<<i;

        }
        mpp[a]= i;
    }    
}


int main(){
vector<int>nums = {3,2,4};
indexes(nums,6);
return 8;
}