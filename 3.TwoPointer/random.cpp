#include <bits/stdc++.h>
using namespace std;
int main(){
    string a[] = {"As","ac"};
    map<string,int>mpp;

    int n  = sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        mpp[a[i]]++;
    }
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;    }


return 8;
}