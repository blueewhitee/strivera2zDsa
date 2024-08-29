#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int &n,int &sum , int &maxsum) {
        if(n==(nums.size())){
            cout<<maxsum;
            return;
        }

        sum +=nums[n];
        if(sum>0){
            maxsum = max(sum,maxsum);
        }
        else{
            sum=0;
        }
        n +=1;
        
        funcc(nums,n,sum,maxsum);
    
    }
int main(){
    vector<int >nums;
    nums = {-1};
    int n  =  0;
    int sum =0;
    int maxsum =0;
    funcc(nums,n,sum,maxsum);   



return 8;
}