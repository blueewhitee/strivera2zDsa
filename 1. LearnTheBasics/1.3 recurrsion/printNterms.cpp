#include<iostream>
using namespace std;
void printInRecursion(int n){
    if(n==1){
        cout<<n<<endl;
        return;
    }
    printInRecursion(n-1);
    cout<<n<<endl;

}
int main(){
    printInRecursion(10);
    return 0;
}