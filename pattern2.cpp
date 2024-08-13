#include<iostream>
using namespace std;


int main(){

int n,i,j;
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<i;j++){
        if((i+j)%2==0)
        {
            cout<<"1"<<"\t";
        }
        else{
            cout<<"0"<<"\t";
        }
    }cout<<endl;
}  
   return 0;
          }