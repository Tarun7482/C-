#include<iostream>
using  namespace std;

int main()
{

    int n,i,j,k=2;
    cout<<"enter the number of the row for the palindromic pattern";
    cin>>n;
    for(i=1;i<=n;i++)
     {
        for(j=1;j<=n-i;j++)
        {
            cout<<" ";

        }
        for(j=i;j>=1;j--){
            cout<<j;
        }
        for(k=2;k<=i;k++){
            cout<<k;
        }
     cout<<endl;
     }
     
     return 0;

}