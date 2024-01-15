#include <bits/stdc++.h>
using namespace std;
//for O(1) we made an vector to directly fetch data from it instead of looping everytime!!!
vector<bool>  createBlackBox(int n){
    //first step -  is to make an vector/array with range  n that can store true/false (if a number is prime or not)
    vector<bool>primee(n+1,true);
    primee[0]=primee[1]=false;
    for(int i=2;i*i<=n;i++){
    if(primee[i]==true){//mark all the values as prime till sqrt(n);

        for(int j=i*i;j<=n;j+=i){//mark all multiples of primes as false
        primee[j]=false;
        }
    }
}
  return primee;
}


int main(){
    int n;
    cin>>n;
    vector<bool>result = createBlackBox(n);
    int query,numOFquery;
    cin>>numOFquery;
    while(numOFquery--){
        cin>>query;
        cout<<result[query]<<endl;
    }
return 8;
}