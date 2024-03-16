#include <bits/stdc++.h>
using namespace std;
    void funcc(vector<int>&nums,int n ) {
            //   int i {0}; //zeros
        //non-zeros
        int j{0};
        int count{0};
        int maxx = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                j = i;
                while(nums[j]==1 && j < nums.size()){
                    count++;
                    j++;
                }
               
            }
             i = j;
             maxx= max(maxx,count);
             count = 0;
        }
        cout<< maxx<<'\n';
    }
    
int main(){
    vector<int >nums;
    nums = {1,1,0,1};
    int n  =  nums.size();

    funcc(nums,n);



return 8;
}