#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        int i; //current pos
        for(i = 0 ;i<n-2;i++){
          for(int j = n-1;j>i;j--){
            if(nums[i]>nums[j]){
                int temp = nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
          }
            
           

        }
        for(int i =0;i<n;i++){
            cout<<nums[i]<<" ";
        }

    }
int main(){
    vector<int >nums;
    nums = {13,46,24,52,20,9};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}