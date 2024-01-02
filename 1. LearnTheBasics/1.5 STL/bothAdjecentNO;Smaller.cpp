#include<bits/stdc++.h>
using namespace std;
vector<int> functions2(vector<int>sol){
    vector<int>temp;
    int i = 1;
    for(auto p = sol.begin()+1;p!=sol.end()-1;p++){
        if(sol[i-1]>*(p) && sol[i+1]>*(p)){
            temp.push_back(*(p));
        }
        i++;
    }
    return temp;

}
int main(){
    vector<int>num = {6,2,5,0,4,3,7,7,5,6};
  vector<int>result = functions2(num);
  for(auto it : result){
    cout<<it;
  }
return 0;
}-------------------------------------------------------------------------------------------------------------------------------------------------------------
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
