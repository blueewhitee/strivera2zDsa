#include <bits/stdc++.h>
using namespace std;
void reversee(vector<int>&v2,int start,int end){
    int i=start;
    int j = end;
    while(i<j){
        int temp = v2[i];
        v2[i] = v2[j];
        v2[j]=temp;
        i++;
        j--;
    }
    for(auto it:v2){
        cout<<it;}
        cout<<'\n';
}

void rotate(vector<int>&v,int k,int n){
    k = k%n;
    
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
   for(auto it:v){
        cout<<it;
    }

}
int main(){
vector<int>v={1,2,3,4,5,6,7};
vector<int>v2={1,2,3,4,5,6,7};
int k =2;
int n = v.size();
reversee(v2,0,6);
reversee(v2,0,k-1);
reversee(v2,k,6);
rotate(v,k,n);
return 8;
}