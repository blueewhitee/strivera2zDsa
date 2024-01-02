#include<bits/stdc++.h>
using namespace std;
void functions(vector<int>sol){
    int i=0;
    vector<int>temp;
    for(auto p=sol.begin()+1;p!=sol.end();p++ ){
         
             if(sol[i]>*(p)&&sol[i+2]>*(p)){
                cout<<*(p)<<endl;
             }
             i++;
         

    }      
    
}



int main(){
    vector<int>num = {1,2,5,0,3,1,7,5,7};
  functions(num);
    
return 0;


}
