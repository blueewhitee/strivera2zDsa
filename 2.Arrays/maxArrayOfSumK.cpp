#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ,int k) {
        map<int,int>mpp;
       int sum{0};
       //int j{0};
       int max_lenght {0};
       for(int i=0;i<n;i++){                           //1,2,3,1,1,1,1
        sum+= nums[i];
        if(sum==k){
            max_lenght = max(max_lenght,i+1);
        }
        int remainder = sum-k;
        if(mpp.find(remainder)!=mpp.end()){
             max_lenght = max(max_lenght,i-mpp[remainder]);
        }
        mpp[sum]=i;

       }
       cout<<max_lenght;
       

    }
int main(){
    vector<int >nums;
    nums = {1,2,3,1,1,1,1};
    int k = 3;
    int n  =  nums.size();

    funcc(nums,n,k);



return 8;
}