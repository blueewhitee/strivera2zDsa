#include<iostream>
using namespace std;
int factorialResult;
void factorial(int n ){
    if(n==1){
        return;
    }
    factorialResult = n*(n-1);
    n=n-1;
    factorial(n-1);


}



int main(){
 factorial(5);
 cout<<factorialResult; 
    return 0;

}