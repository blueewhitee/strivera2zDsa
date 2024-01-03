#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{1,2,3},{4,5,6}};
    for (auto &it :v){
        for(auto it2: it){
        cout<<it2;}
        cout<<endl;
    }


    return 0;
}