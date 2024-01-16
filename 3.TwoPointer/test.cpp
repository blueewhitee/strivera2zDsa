#include <bits/stdc++.h>
using namespace std;
int FindPair(vector<int>nums,int target){
int result{0};
sort(nums.begin(),nums.end());
int n  =nums.size();

for(int i =0;i<=n-1;i++){
    for(int j=i+1;j<=n;j++){
        if(nums[j]!=nums[j+1]){
        if(nums[i]<nums[j]){
            if(nums[i]+nums[j]<target){
                result++;
            }

        }}
    }
}
    
return result;
}
int main(){
vector<int>nums={9,-5,-5,5,-5,-4,-6,6,-6};//{-7,-6,-2,-1,2,3,5}
int result = FindPair(nums,3);
cout<<result;


return 8;
}