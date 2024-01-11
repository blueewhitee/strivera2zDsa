#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[5]={1,2,4,5};
    int array2[5];
    int k =5;
    map<int,int>mpp;
    map<int,int>mpp2;
    for(int i=0;i<=3;i++){
        mpp[array[i]]++;
    }
    int n;
    int count{0};
    for(auto p = mpp.begin();p!=mpp.end();p++){
      count=0;
        for(auto i = mpp.begin();i!=mpp.end();i++){
            if(i->first>p->first){
            n = i->first-p->first;
            mpp2[p->first]=n; 
            break;
            } 
        }

    }
    for(auto it : mpp2){
        cout<<it.first<<"->"<<it.second<<endl;
        
    }
    int min=1;
    while(k!=0){
        for(auto it : mpp2){
            if(min==it.second){
                array2[count]=
            }

        }

    }


}


