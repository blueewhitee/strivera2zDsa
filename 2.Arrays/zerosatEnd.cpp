#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        int i{0};
        int j{0};
        while(j<n){
            if(nums[j]==0){
                j++;
            }
            if (nums[i]!=0){
                i++;
            }
            if(j>i&&nums[j]!=0&&nums[i]==0){
                swap(nums[j],nums[i]);
                i++;
                j++;
            }
            j++;

        }

        for(auto it: nums){
            cout<<it<<'\n';}

    }
/*        int n  = nums.size();
        if(n==2){
            if(nums[0]==0 &&nums[1]!=0){
                nums[0]=nums[1];
                nums[1]=0;
                }
            
        }

        if(n>2){
        int i{0};
        int j {0};
        while(j<n){
            if(nums[i]!=0 ){
                i++;
            
            }
            if(nums[j]==0){
                j++;
            }
            if (nums[j]!=0 && nums[i]==0 && i<j){
                nums[i]=nums[j];
                nums[j]=0;
                
                
              //  i=j;
            }
            j++;
            
            
            
        }*/


    //////////////////////////////////////////////////////////////////////////////////////////////
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
    nums = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}