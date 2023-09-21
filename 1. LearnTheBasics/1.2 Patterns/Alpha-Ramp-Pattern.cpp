#include<iostream>
#include<typeinfo>

using namespace std;
void pattern(){
    for(int i=65;i<=69;i++){
        for(int j =65;j<=i;j++){
            cout<<char(i);
        }
        cout<<endl;
    }
}




int main(){
    
   
    

    pattern(); 
    return 0;
}
