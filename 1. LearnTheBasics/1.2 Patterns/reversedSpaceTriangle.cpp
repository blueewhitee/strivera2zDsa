#include <iostream>
using namespace std;
void space(int m){
    for(int i=0;i<(((2*m-1)-1)/2);i++){
        cout<<"-";
    }
};

void pattern1(int n){
    int m=n;
    for(int i=1;i<=n;i++){
       //int a=2;
        for(int j =1;j<=(1+(i-1)*2);j++){

            if(j==1){
             space(m);
             
            }
            
        
            cout<<"*";
            if(j==(1+(i-1)*2)){
            space(m);
            }
            
        }
        cout<<endl;
        m--;
        
    }
};
/*void space(int m){
    for(int i=0;i<(((2*m-1)-1)/2);i++){
        cout<<"  ";
    }
};*/
int main(){
    int n;
    cout<<"enter the no: ";
    cin>>n;
    pattern1(n);
    return 0;
}
