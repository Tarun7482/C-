#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(int x,int y,int z){

    int a,b,c;
    a=max(x,y,z);
    if(a==x){
        b=y;
        c=z;
    }else if (a==y)
    {
        b=x;
        c=z;/* code */
    }else{
        b=x;
        c=y;
    }
    if(a*a==(b*b+c*c)){
        return true;
        }else{
            return false;
    }
    
}


int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(check(x,y,z)){
        cout<<"pythonrian triplet";
        }else{
            cout<<"not a pythonrian triplet";


}
return 0;
}