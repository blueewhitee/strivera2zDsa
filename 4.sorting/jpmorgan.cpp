#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        int k=2;
        int l=k;
        sort(nums.begin(),nums.begin()+2);
        int max =nums[1];
        
            while(k!=0){
                sort(nums.begin(),nums.begin()+2);
                int temp = nums[0];
                
                nums[0]=nums[1];
                
                nums.erase(nums.begin()+1);
                nums.push_back(temp);
                if(max==nums[0]){
                    if(l!=0){
                    l--;
                    k=l;
                    }
                    else if(l==0){
                        break;
                    }
                }
                else{
                    max=nums[0];
                    k=l;
                }


                
            }
            for(auto it:nums){
            cout<<it;
            }
    }
int main(){
    vector<int >nums;
    nums = {1,2,3,4};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}