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
        if(mpp.find(sum)==mpp.end()){mpp[sum]=i;}

       }
       for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<"\n";
       }
       cout<<max_lenght;

    }
int main(){
    vector<int >nums;
    nums = {2,0,0,3};
    int k = 3;
    int n  =  nums.size();

    funcc(nums,n,k);



return 8;
}