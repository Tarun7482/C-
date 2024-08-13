#include<iostream>
using namespace std;

int main(){

    int n,i,j,m;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            m++;
            cout<<m<<"\t";
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=n+1-i;j++)
        {
            m++;
            cout<<m<<"\t:";
      
        }cout<<endl;
    }
    return 0;
}