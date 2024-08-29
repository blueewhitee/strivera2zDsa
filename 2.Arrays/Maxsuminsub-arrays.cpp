#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        int i{0};
        int j {i+1};
        int l{nums[i]},s{0},s2{0};
        int maxsum{0};
        int sum{0};
        if(nums[j]<=nums[i]){
            s = nums[j];
            s2=nums[i];
        }
        for(j;j<n;j++){
            if(l<=nums[j]){
                l=nums[j];
                i=j;
                if(nums[i-1]<=nums[i]){
            s = nums[i-1];
            s2=nums[i];
        }
                
                if(j<(n-1)){
                    j = i+1;
                    s = nums[j];
                    s2=nums[i];
                }
            }
            if(s>nums[j]){
                s2=s;
                s= nums[j];
            }
            sum =s+s2;
            maxsum = max(maxsum,sum);
            
            
        }
        cout<<maxsum;
    }
int main(){
    vector<int >nums;
    nums = {1 ,6 ,5 ,8 ,10};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}