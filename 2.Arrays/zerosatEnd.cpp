#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        vector<int>nums2;
        int i{0};
        int j{0};
        while(i<n){
            if(nums[i]!=0){
                nums2.push_back(nums[i]);
                j++;
            }
            i++;
        }
        //int zeroes = n - nums2.size();
        while(j<n){
            j++;
            nums2.push_back(0);
        }
        for(auto it: nums2){
            cout<<it<<'\n';
        }



    }
/*  BRUTE FORCE APPROACH-  
    vector<int>nums2;
        int i{0};
        int j{0};
        while(i<n){
            if(nums[i]!=0){
                nums2.push_back(nums[i]);
                j++;
            }
            i++;
        }
        //int zeroes = n - nums2.size();
        while(j<n){
            j++;
            nums2.push_back(0);
        }
        for(auto it: nums2){
            cout<<it<<'\n';
        }*/






int main(){
    vector<int >nums;
    nums = {0,1,0,3,12};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}