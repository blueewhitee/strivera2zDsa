#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>& nums,int n ) {
        map<int,int>oye;
        for(int i =0;i<n;i++){
            oye[i+1]=nums[i];
        }
        for(auto it: oye){
            cout<<it.first<< " "<<it.second<<'\n';
        }


    }
int main(){
    vector<int >nums;
    nums = {0,1,0,3,12};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}