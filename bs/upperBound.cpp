#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int start,int end,int x,int result ) {
        if(start>end){
        cout<<result;
        return;
        }
        int mid = (start+end)/2;
        if(x<=nums[mid]){
            if(x==nums[mid]){ cout<<mid; return;} 
            result = mid;
            return funcc(nums,start,mid-1,x,result);
        }
        else{
            return funcc(nums,mid+1,end,x,result);
        }
        
    }
int main(){
    vector<int >nums;
    nums = {1,2,2,3};
    int n  =  nums.size()-1;
    int start =0;
    int end =n;
    funcc(nums,start,end,2,-1);



return 8;
}