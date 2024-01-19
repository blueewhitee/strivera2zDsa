#include <bits/stdc++.h>
using namespace std;
void mostwater(vector<int>height){
    int i =0;
    int j = height.size()-1;
    if(height.size()==2){
    cout<<"2 elements :"<<min(height[i],height[j])*(j-i);
    }
    int ans = min(height[i],height[j])*(j-i);

    while(i<j){
        if(height[i]<height[j]){
            i++;
        }
        else{
            j--;
        }
        int max = min(height[i],height[j])*(j-i);
        if(max>ans){
            ans =max;
        }
    }
    cout<<ans;

}

int main(){

vector<int>height = {1,2,6,8,5,4,8,3,7};
mostwater(height);
return 8;
}