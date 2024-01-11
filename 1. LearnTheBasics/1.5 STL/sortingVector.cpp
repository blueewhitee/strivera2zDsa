#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>nums= {1,5,2,3,4};
    sort(nums.begin(),nums.end());
    for(auto it : nums){
        cout<<it;
    }
    return 0 ;
}
