#include <bits/stdc++.h>
using namespace std;
void secondlargest(vector <int>a) {
    int i{0};
    int largest = INT_MIN;
    int secondlargest;
    while(i<a.size()){
        if(a[i]>largest){
            secondlargest = largest;
            largest = a[i];
        }
        else if(a[i]<largest&&a[i]>secondlargest){// O(N)
            secondlargest =a[i];
        }
         i++;
    }
    



    cout<<secondlargest;
         
}
void secondsmallest(vector<int >a){
    int i {0};
    int smallest= INT_MAX;
    int secondsmallest;
    while(i<a.size()){
        if(a[i]<smallest){
            secondsmallest = smallest;
            smallest = a[i];
        }
        if(a[i]>smallest&&secondsmallest>a[i]){ ////TC - O(N)
            secondsmallest = a[i];
        }
        i++;
    }
    cout<<secondsmallest<<'\n';
    

}

int main(){
vector<int>a= {1,2,4,7,7,5};  // O(2N) optimal solution
secondlargest(a);
secondsmallest(a);

return 8;
}