#include<iostream>
using namespace std;

int main(){

int i,j,n,arr[40],pd,curr,ans=2;
cout<<"Enter the number of elements in the array: ";
cin>>n;
cout<<"Enter the elements of the array: ";
for(i=0;i<n;i++){
cin>>arr[i];
            }
   pd=arr[1]-arr[0];
   curr=2;
   j=2;
   while(j<n){
    if(pd==arr[j]-arr[j-1]){
        curr++;
    }
    else
    {
        pd=arr[j]-arr[j-1];
        curr=2;
    }
    if(ans<curr)
    {
        ans=curr;
    }
    j++;
   }
   cout<<ans<<endl;
   return 0;
}
   






