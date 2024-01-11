#include<iostream>
using namespace std;
/*void space(int s){
    for(int i=1;i<=s-2;i++){
        cout<<"-";
    }
}*/
void pattern (int n){
    int s=2*n;

    for(int i =1;i<=n;i++){
        for(int j = 1;j<=i;j++){
            cout<<j;
        }
        for(int j =1;j<=(s-2);j++){
            cout<<"-";
        }
        
        for(int k=i;k>=1;k--){ //the error that trouble me was that i gave condition k<=1, that created infite loop
            cout<<k;
        }
        s=s-2;
        cout<<endl;


    }
}
int main(){
    int n;
    cout<<"enter no; ";
    cin>>n;
    pattern(n); 
    return 0;
}
