#include<bits/stdc++.h>
using namespace std;
bool consecutive(vector<int>num){
        sort(num.begin(),num.end());
        for(auto i : num){
                if(i+1 == num[i+1]){
                }
                else{
                    cout<<"not consecutive"<<endl;
                    return false;
                }
                
        }
        cout<<"consecutive it is";
        return true;
}
int main()
{
    vector<int>nums= {0,5,2};
    cout<<consecutive(nums);
    return 0 ;
    }
