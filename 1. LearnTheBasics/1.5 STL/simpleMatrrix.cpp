#include<bits/stdc++.h>
using namespace std;
void functions2(int n){
vector<vector<int>>v2;
for(int i = 0;i<n;i++){
  vector<int>temp;
  for(int j=0;j<n;j++){
    temp.push_back(n);
    }
    v2.push_back(temp);
}
for(auto &row: v2){
  for(auto it: row){
    cout<<it;
  }
  cout<<endl;
}
}
int main(){
  int n;
  cin>>n;
  functions2(n);
  return 0;
}

