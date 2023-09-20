#include<iostream>
using namespace std;

void pattern (){
    int a =69;
    for(int i=65;i<=69;i++){
  
        for(int j=65;j<=a;j++){
            cout<<char(j);
        }
        a--;

        cout<<endl;
    }


}
int main(){
    
    

    pattern(); 
    return 0;
}
