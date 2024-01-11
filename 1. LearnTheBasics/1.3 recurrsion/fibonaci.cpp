#include<iostream>
using namespace std;
int ans= 0;
int m=0;
int p =1;

void fibonaci(int n){
    if(n==1){            //base condition for fibonacci series can be 1 as it needs
                        //two operand atleast to make its first series ie - 0+1
        cout<<m<<endl<<p<<endl;
        return;
    }
    
    fibonaci(n-1);
    ans  = m+p;
    cout<<ans<<endl;
    m = p;
    p = ans;
}
//hypothesis n= 0 1 1 2 3 5
//induction if n = 0 1 1 2 3 5
//s0,  n-1 = 0 1 1 2 3 5 also true

int main(){
fibonaci(5);

return 0;
}

