#include <bits/stdc++.h>
using namespace std;
vector<int>sum(vector <int >v){
    int i{0};
    int n  = sizeof(v)/sizeof(v[0]);
    int m  = sizeof(v)/3;



    for(i;i<n;i++){
        for(int j=i+1;j<n;j++){                                   //2,-1,-4-1,0,1,
            for(int k=j+1;k<n;k++){       
               // cout<<"K :"<<k<<endl; 
                if(v[i]+v[j]+v[k]==0){
                    
                    

                }
            
            }//cout<<"j :"<<j<<endl;
        }
       
    } 

    
    return v;
}


int main(){
    int array [] = {-1,0,1,2,-1,-4};
    vector<int>givenarray;
    for(int i =0;i<size(array);i++){
        givenarray.push_back(array[i]);
    }
    sum(givenarray);

return 8;
}