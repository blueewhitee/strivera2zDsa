#include<bits/stdc++.h>
using namespace std;
void toUpper(vector<string>v2){
    string result;
    int i=0;
    for(auto it: v2){
        if(it==" "){
            v2[i+1]=toupper(v2[i+1]);
            
        }
        i++;
    }
 
    
    
}




int main()
{
    vector<string> colors = {"red", "green", "black", "white", "Pink"};
    toUpper(colors);

    return 0;  
} 
