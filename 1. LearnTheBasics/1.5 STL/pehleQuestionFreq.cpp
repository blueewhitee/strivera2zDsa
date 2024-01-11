#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[3]={1,2,4};
    int k =5 ;

    int n =sizeof(array)/sizeof(array[0]);
    int n2=n;

   sort(array,array+n);
   //int array2[3]{0};
   int i=0;
   int diff;
   map<int ,int >mpp;
   map<int ,int >mpp2;
   for(int i=0;i<n-1;i++){
   diff =  array[i+1]-array[i];
   mpp[array[i]]=diff;

    }
    // for(auto it:mpp){
    //     cout<<it.first<<"->"<<it.second<<endl;
    // }
    auto iterator = mpp.begin();
    
    int  count =1;
    
    while(iterator!=mpp.end()){
        if(iterator->second<=k){
            array[i] +=iterator->second;
            k = k-iterator->second;
        }
        iterator++;   
        i++;

    }
for(int j=0;j<n-1;j++){
   diff =  array[j+1]-array[j];
   mpp2[array[j]]=diff;

    }
    for(auto it:mpp2){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    auto iterator2 = mpp2.rbegin();
    //iterator2++;
    /*  while(iterator2!=mpp2.rend()){
        // if(count==1){
        //         iterator2++;
        //         count--;
        //         //i++;
        //     }
        if(iterator2->second<=k&&iterator2->second!=0){
            array[n2-1] +=iterator2->second;
            k = k-iterator2->second;
            
        }
        iterator2++;   
        n2--;

    }*/
    int j=0;
    for(auto it =mpp2.begin();it!=mpp2.end();it++){
            if(it->second<=k&&it->second!=0){
            array[j] +=it->second;
            k = k-it->second;
        }
        j++;

    }


    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}