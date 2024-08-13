#include<iostream>
using namespace std;

int main(){
   
    int n,r,m;
    cout<<"enter your number to convert into binary";
    cin>>n;
    while(n!=0){
        r=n%2;
        cout<<r;
        n=n/2;
    }
   
return 0;

}