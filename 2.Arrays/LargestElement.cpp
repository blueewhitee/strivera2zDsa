#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {2,5,1,3,0};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];

        }
    }
    cout<<max;

    return 0;
}