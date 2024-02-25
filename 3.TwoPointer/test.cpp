#include <bits/stdc++.h>
using namespace std;
int FindPair(vector<int>nums,int val){
        int i {0};
        int j = nums.size()-1;
        while(i<=j){
            if(nums[j]!=val&&nums[i]==val){
                nums[i]=nums[j];
                i++;
                j--;
            }
            else if(nums[i]==val&&nums[j]==val){
                j--;
            }
            else if( nums[i]!=val&&nums[j]!=val){
                i++;
                
            }
            else{
                j--;
            }
            }
            for(int k =0;k<i;k++){
                cout<<nums[k]<<'\n';
            }
    
return 0;
}
int main(){
vector<int>nums={0,1,2,2,3,0,4,2};//{-7,-6,-2,-1,2,3,5}
int result = FindPair(nums,2);
//cout<<result;


return 8;
}