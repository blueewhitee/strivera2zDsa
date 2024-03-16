#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        map<int ,int>mpp;
        for(int i =0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second==2){
                cout<<it.first;
                break;
            }        
        }
    }
int main(){
    vector<int >nums;
    nums = {1,2,4,2,7};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}