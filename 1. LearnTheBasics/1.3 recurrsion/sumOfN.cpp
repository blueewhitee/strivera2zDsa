#include<iostream>
using namespace std;
int ans = 0;
void printInRecursion(int n){
    if(n==1){
        ans+=n;
        return;
    }
    printInRecursion(n-1);
    ans = ans+n;
}
int main(){
    printInRecursion(5);
    cout<<ans;
    return 0;
}