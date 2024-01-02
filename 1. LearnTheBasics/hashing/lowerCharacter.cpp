#include <iostream>
using namespace std;


int main()
{
string input;
cout<<"enter string"<<endl;
cin>>input;

int array[26]={0};
for(int i =0;i<input.length();i++){
    array[int(input[i])-int('a')] +=1; 
}

int query;
cout<<"enter num of queries"<<endl;
cin>>query;
char character;
while(query--){
    cin>>character;
    int index;
    index = int(character)-int ('a');
    cout<<array[index]<<endl;
    
}

return 0;
}
